#!/usr/bin/python3
"""
Perimeter of island
"""


def island_perimeter(grid):
	"""
	Calculates perimeter of island
	Args:
		grid ([list]): list of list with representation island

	Returns:
		[Int]: [perimeter]
	"""
	perimeter = 0
	
	for i in range(len(grid)):
		for j in range(len(grid[i])):
			if grid[i][j] == 1:
				k, m = i, i
				h, l = j, j
				if i == 0:
					k = 1
					perimeter += 1
				if j == 0:
					h = 1
					perimeter += 1
				if j == len(grid[i]) - 1:
					l = j - 1
					perimeter += 1
				if i == len(grid) - 1:
					m = i - 1
					perimeter += 1
				if grid[k - 1][j] == 0:
					perimeter += 1
				if grid[i][h - 1] == 0:
					perimeter += 1
				if grid[i][l + 1] == 0:
					perimeter += 1
				if grid[m + 1][j] == 0:
					perimeter += 1
	return perimeter
