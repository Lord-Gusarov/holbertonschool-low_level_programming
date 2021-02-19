#!/usr/bin/python3
"""
Determines the perimeter of an island of 1's
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    Args:
        grid (2D list): 1's and 0's
    """
    if type(grid) is not list:
        return 0
    for x in grid:
        if type(x) is not list:
            return 0
        for num in x:
            if type(num) is not int:
                return 0

    p = 0
    r_max = len(grid)
    c_max = len(grid[0])

    for r in range(r_max):
        for c in range(c_max):
            if grid[r][c] == 1:
                if r + 1 < r_max and grid[r + 1][c] == 0:
                    p += 1
                if r - 1 >= 0 and grid[r - 1][c] == 0:
                    p += 1
                if c + 1 < c_max and grid[r][c + 1] == 0:
                    p += 1
                if c - 1 >= 0 and grid[r][c - 1] == 0:
                    p += 1
    return p
