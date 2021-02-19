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
    p = 0
    for r in range(len(grid)):
        for c in range(len(grid[0])):
            if grid[r][c] == 1:
                if grid[r + 1][c] == 0:
                    p += 1
                if grid[r - 1][c] == 0:
                    p += 1
                if grid[r][c + 1] == 0:
                    p += 1
                if grid[r][c - 1] == 0:
                    p += 1
    return p
