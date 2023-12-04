#!/usr/bin/python3
"""Solivng the island parimeter problem"""


def island_perimeter(grid):
    """getting the parameter of the given grid:
        grid is a list of list of integers:
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100"""
    # # getting the number of lists in the grid
    num = 0
    param = 0
    for lst in grid:
        num = num + 1

    # i have 16 case can happen
    i = 0
    while (i < num):
        for index in range(0, len(grid[i])):
            if (grid[i][index]) == 1:
                # check the left edge case -------
                if (i == 0):
                    if (index == 0):
                        param = param + 2
                        # check the water underneath
                        if (grid[i][index + 1]) == 0:
                            param += 1
                        # check the water beside
                        if (grid[i+1][index]) == 0:
                            param += 1
                    # check the right edge case--------------
                    elif (index == (len(grid[i]) - 1)):
                        param = param + 2
                        # check the water underneath
                        if (grid[i][index - 1]) == 0:
                            param += 1
                        # check the water beside
                        if (grid[i+1][index]) == 0:
                            param += 1
                    # check top row case---------------
                    else:
                        param += 1
                        if (grid[i][index + 1]) == 0:
                            param += 1
                        if (grid[i][index - 1]) == 0:
                            param += 1
                        if (grid[i+1][index]) == 0:
                            param += 1
                # check the bottom edge cases
                elif (i == num - 1):
                    if (index == 0):
                        param = param + 2
                        # check the water underneath
                        if (grid[i][index + 1]) == 0:
                            param += 1
                        # check the water beside
                        if (grid[i-1][index]) == 0:
                            param += 1
                    # check the right edge case
                    elif (index == (len(grid[i]) - 1)):
                        param = param + 2
                        # check the water underneath
                        if (grid[i][index - 1]) == 0:
                            param += 1
                        # check the water beside
                        if (grid[i-1][index]) == 0:
                            param += 1
                    # check bottom row case
                    else:
                        param += 1
                        if (grid[i][index + 1]) == 0:
                            param += 1
                        if (grid[i][index - 1]) == 0:
                            param += 1
                        if (grid[i-1][index]) == 0:
                            param += 1
                else:
                    # #  check the mid  edge cases
                    if (index == 0):
                        param += 1
                        if (grid[i][index + 1] == 0):
                            param += 1
                        if (grid[i-1][index] == 0):
                            param += 1
                        if (grid[i+1][index] == 0):
                            param += 1
                    # # check the last element
                    elif (index == len(grid[i]) - 1):
                        param += 1
                        if (grid[i][index - 1] == 0):
                            param += 1
                        if (grid[i-1][index] == 0):
                            param += 1
                        if (grid[i+1][index] == 0):
                            param += 1
                    else:
                        if (grid[i][index + 1] == 0):
                            param += 1
                        if (grid[i-1][index] == 0):
                            param += 1
                        if (grid[i+1][index] == 0):
                            param += 1
                        if (grid[i][index - 1] == 0):
                            param += 1
        i += 1
    return param
