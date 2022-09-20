#!/usr/bin/python3
""" Module that calculates the perimeter of an island in a grid """

def island_perimeter(grid):
    """ Returns the perimeter of the island in grid """
    visit = set()
    def dfs(i, j):
        if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]) or grid[i][j] == 0:
            return 1
        if (i, j) in visit:
            return 0
        
        visit.add((i, j))
        perimeter = dfs(i, j + 1)
        perimeter += dfs(i + 1, j)
        perimeter += dfs(i, j - 1)
        perimeter += dfs(i - 1, j)
        return perimeter

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                return dfs(i, j)
