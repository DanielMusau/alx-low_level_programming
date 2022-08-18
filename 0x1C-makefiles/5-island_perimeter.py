#!/usr/bin/python3
""" Module contains function that returns the
perimeter of island described in grid.
"""


def island_perimeter(grid):
    """ returns the perimeter of island. """
    perimeter = 0

    rows_no = len(grid)

    if grid != []:
        column_no = len(grid[0])

    for i in range(rows_no):
        for j in range(column_no):
            if grid[i][j] == 1:
                if (i - 1) == -1 or grid[i - 1][j] == 0:
                    perimeter += 1
                if (i + 1) == rows_no or grid[i + 1][j] == 0:
                    perimeter += 1
                if (i - 1) == -1 or grid[i][j - 1] == 0:
                    perimeter += 1
                if (i + 1) == column_no or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
