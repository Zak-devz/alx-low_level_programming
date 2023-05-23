#include "shell.h"

/**
 * main - the main function
 *
 * Return: (Success) 0 always, 1 on failure
 */
int main(void)
{
	sh_t data;
	int p_line;

	_memset((void *)&data, 0, sizeof(data));
	signal(SIGINT, signal_handler);
	while (1)
	{
		index_cmd(&data);
		if (read_line(&data) < 0)
		{
			if (isatty(STDIN_FILENO))
				PRINT("\n");
			return(1);
		}
		if (split_line(&data) < 0)
		{
			free_data(&data);
			continue;
		}
		p_line = parse_line(&data);
		if (p_line == 0)
		{
			free_data(&data);
			continue;
		}
		if (p_line < 0)
		{
			print_error(&data);
			continue;
		}
		if (process_cmd(&data) < 0)
		{
			print_error(&data);
			break;
		}
		free_data(&data);
	}
	free_data(&data);
	exit(EXIT_SUCCESS);
}

#define DELIMITER ":"
/**
 * parse_line - parses arguments to a valid command
 * @data: a pointer to the struct of data
 *
 * Return: (SUCCESS) a positive number, (Fail) a negative number
 */
int parse_line(sh_t *data)
{
	if (is_path_form(data) > 0)
		return (SUCCESS);
	if (is_builtin(data) > 0)
	{
		if (handle_builtin(data) < 0)
			return (FAIL);
		return (NEUTRAL);
	}
	is_short_form(data);
	return (SUCCESS);
}
#undef DELIMITER
#define DELIMITER " \n\t\r\a\v"
/**
 * split_line - splits line to tokens
 * @data: a pointer to the struct of data
 *
 * Return: (Success) a positive number, (Fail) a negative number
 */
int split_line(sh_t *data)
{
	char *current_token;
	size_t size = TOKENSIZE, new_size, i = 0;

	if (_strcmp(data->line, "\n") == 0)
		return (FAIL);
	data->args = malloc(size * sizeof(char *));
	if (data->args == NULL)
		return (FAIL);
	current_token = strtok(data->line, DELIMITER);
	if (current_token == NULL)
		return (FAIL);
	while (current_token)
	{
		data->args[i++] =  current_token;
		if (i + 2 >= size)
		{
			new_size = size * 2;
			data->args = _realloc(data->args, size * sizeof(char *),
					new_size * sizeof(char *));
			if (data->args == NULL)
				return (FAIL);
			size = new_size;
		}
		current_token = strtok(NULL, DELIMITER);
	}
	data->args[i] = NULL;
	return (0);
}
#undef DELIMITER
/**
 * process_cmd - process command and execute process
 * @data: a pointer to the struct of data
 *
 * Return: (Success) a positive number, (Fail) a negative number
 */
int process_cmd(sh_t *data)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		signal(SIGINT, SIG_DFL);
		if (execve(data->cmd, data->args, environ) < 0)
		data->error_msg = _strdup("not found\n");
			return (FAIL);
	}
	else
	{
		waitpid(pid, &status, WUNTRACED);
	}
	return (0);
}
/**
 * read_line - read a line from the standard input
 * @data: a pointer to the struct of data
 *
 * Return: (Success) a positive number, (Fail) a negative number
 */
int read_line(sh_t *data)
{
	char *csr_ptr, *end_ptr, c;
	size_t size = BUFSIZE, read_st, length, new_size;

	data->line = malloc(size * sizeof(char));
	if (data->line == NULL)
		return (FAIL);
	if (isatty(STDIN_FILENO))
		PRINT(PROMPT);
	for (csr_ptr = data->line, end_ptr = data->line + size;;)
	{
		read_st = read(STDIN_FILENO, &c, 1);
		if (read_st == 0)
			return (FAIL);
		*csr_ptr++ = c;
		if (c == '\n')
		{
			*csr_ptr = '\0';
			return (SUCCESS);
		}
		if (csr_ptr + 2 >= end_ptr)
		{
			new_size = size * 2;
			length = csr_ptr - data->line;
			data->line = _realloc(data->line, size * sizeof(char),
						new_size * sizeof(char));
			if (data->line == NULL)
				return (FAIL);
			size = new_size;
			end_ptr = data->line + size;
			csr_ptr = data->line + length;
		}
	}
}
