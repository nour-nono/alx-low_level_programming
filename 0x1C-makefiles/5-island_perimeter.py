#!/usr/bin/python3
"""Module for calculating the perimeter of islands represented as a grid."""


def island_perimeter(gr):
    """
    Calculate the perimeter of an island represented by a 2D grid.

    Parameters:
        gr (list): A 2D list representing the grid.
            Each cell contains a boolean value indicating
            whether the cell is land (True) or water (False).

    Returns:
        int: The total perimeter of the island.
            If the input grid is invalid (None or less than 2x2)
            , return 0.

    The algorithm works by iterating over each cell in the grid.
    If a cell is land, it checks the neighboring cells
    (up, down, left, right).
    If a neighboring cell is water
    , it contributes one unit to the perimeter.
    The algorithm assumes that the edges of the grid form
    the outer boundary of the island.
    """
    # Check if the input is valid
    if gr is None or not (isinstance(gr, list) and len(gr) > 2):
        return 0
    if gr[0] is None or not (isinstance(gr[0], list) and len(gr[0]) > 2):
        return 0

    # Get the dimensions of the grid
    height = len(gr)
    width = len(gr[0])

    # Initialize the perimeter counter
    ans = 0

    # Iterate over each cell in the grid
    for i in range(1, height - 1):
        for j in range(1, width - 1):
            # If the cell is land
            if gr[i][j]:
                # Add the number of water neighbors to the perimeter counter
                tmp = gr[i + 1][j] + gr[i - 1][j]
                tmp += gr[i][j - 1] + gr[i][j + 1]
                ans += 4 - tmp

    # Return the total perimeter
    return ans
