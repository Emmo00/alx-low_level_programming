#!/usr/bin/python3
"""5-island_perimeter defines
island_perimeter function
"""
def island_perimeter(grid):
    """island_perimeter
    finds the perimeter of a grid representing
    a map
    returns the perimeter
    """
    perimeter = 0
    for i in range(len(grid)):
        land = False
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if not land:
                    perimeter += 1
                land = True
                if i > 0 and grid[i - 1][j] == 0:
                    perimeter += 1
                if i < len(grid[j]) - 1 and grid[i + 1][j] == 0:
                    perimeter += 1
            if grid[i][j] == 0 and land:
                perimeter += 1
                land = False
    return perimeter
