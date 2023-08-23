#!/usr/bin/python3
"""
This script defines a function to calculate the perimeter of an island.
The island is represented by a grid where water is denoted by 0 and land by 1.

Functions:
    island_perimeter(grid): Calculates the perimeter
    of the island defined in the grid.
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of an island defined by the grid.

    Args:
        grid (list): A list of lists of integers representing the island.

    Returns:
        int: The perimeter of the island defined in the grid.
    """

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1

    return size * 4 - edges * 2
