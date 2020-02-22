#!/usr/bin/python3
"""the island"""


def island_perimeter(grid):
    """perimeter of the island"""
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                count += 4
                if j > 0 and grid[i][j - 1]:
                    count -= 2
                if i > 0 and gird[i - 1][j]:
                    count -= 2
    return count
