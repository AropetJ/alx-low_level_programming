#!/usr/bin/python3
""" Defines a function that returns the perimeter of the island"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in grid.

    Args:
        grid (list of list of integers): The grid representing
        the island and water zones.

    Returns:
        int: The perimeter of the island.
    """
    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0

    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

    return perimeter
