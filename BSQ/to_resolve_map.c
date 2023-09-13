/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NORM_to_resolve_map.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igsanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:45:39 by igsanche          #+#    #+#             */
/*   Updated: 2023/07/26 18:06:25 by igsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structures.h"
#include <unistd.h>
#include <stdio.h>

int	get_max_size(point fpoint, char **matrix)
{
	int	size;
	int	col;
	int	flag;
	int	i;
	int	j;

	size = 0;
	col = fpoint.col;
	flag = 0;
	while ((fpoint.col + size) <= fpoint.this_map.max_col
		&& (fpoint.row + size) <= fpoint.this_map.max_row && flag == 0)
	{
		i = 0;
		while (i <= size)
		{
			j = 0;
			while (j <= size)
			{
				if (matrix[fpoint.row + i][fpoint.col + j]
					== fpoint.this_map.obst)
					flag = 1;
				j++;
			}
			i++;
		}
		size++;
	}
	return (size - 2);
}

void	get_square(map *new_map, point *final_point, char **matrix)
{
	point	fpoint;
	int		size;
	int		sizebefore;

	sizebefore = -1;
	size = -1;
	fpoint.col = 0;
	fpoint.row = 0;
	fpoint.this_map = *new_map;
	final_point->this_map = *new_map;
	while (fpoint.row != new_map->max_row)
	{
	fpoint.col = 0;
		while (fpoint.col != new_map->max_col)
		{
			if (matrix[fpoint.row][fpoint.col] == new_map->empty)
			{
				size = get_max_size(fpoint, matrix);
				if (size > sizebefore)
				{
					final_point->col = fpoint.col;
					final_point->row = fpoint.row;
					final_point->size = size;
					sizebefore = size;
				}
			}
			fpoint.col++;
		}
	fpoint.row++;
	}
	if (size == -1)
		final_point->size = size;
}

void	print_matrix(point fpoint)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= fpoint.this_map.max_row)
	{
		j = 0;
		while (j <= fpoint.this_map.max_col)
		{
			write(1, &matrix[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

void	write_map(point fpoint, char **matrix)
{
	int	i;
	int	j;
	int	size;

	size = 0;
	while (size <= fpoint.size)
	{
		i = 0;
		while (i <= size)
		{
			j = 0;
			while (j <= size)
			{
				matrix[fpoint.row + i][fpoint.col + j] = fpoint.this_map.full;
				j++;
			}
			i++;
		}
		size++;
	}
	i = 0;
	j = 0;
	print_matrix(fpoint);
}