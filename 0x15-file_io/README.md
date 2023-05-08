File I/O in C allows programmers to read and write data from and to files. The stdio.h header file in C provides functions such as fopen(), fread(), fwrite(), fprintf(), and fclose() to perform file I/O operations.

To read data from a file, you can use the fopen() function to open the file in read mode ("r"), and then use fread() to read the data. To write data to a file, you can use the fopen() function to open the file in write mode ("w"), and then use fwrite() to write the data.

In addition to read and write modes, there are other modes you can use with the fopen() function, such as append mode ("a") to append data to a file, binary mode ("b") to read and write binary data, and update mode ("+") to allow both read and write operations.

When you are done working with a file, it is important to close it using the fclose() function to free up system resources and ensure that any changes made to the file are written to disk.

Note that file I/O in C can be error-prone, as there are many potential issues that can arise, such as file permissions, file format, and unexpected errors during reading or writing. It is important to check for errors and handle them appropriately using error-handling techniques such as checking return values and setting errno.
