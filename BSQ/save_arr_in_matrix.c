/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NORM_save_arr_in_matrix.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igsanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:42:04 by igsanche          #+#    #+#             */
/*   Updated: 2023/07/26 17:48:56 by igsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structures.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
int		ft_atoi(char *str);

char	**save_arr_in_matrix(char *arr, map *newMap)
{
	int		i;
	int		e;
	int		a;
	char	**matrix;

	i = 0;
	while (arr[i] != '\n')
	{
		i++;
	}
	i--;
	newMap->full = arr[i];
	i--;
	newMap->obst = arr[i];
	i--;
	newMap->empty = arr[i];
	arr[i] = 'a';
	newMap->max_row = ft_atoi(arr);
	i = i + 5;
	matrix = (char **) malloc ((newMap->max_row + 1) * sizeof(char *));
	e = i;
	while (arr[e] != '\n')
	{
		e++;
	}
	a = e - i;
	e = 0;
	while (e <= newMap->max_row)
	{
		matrix[e] = (char *) malloc (a * sizeof(char));
		e++;
	}
	newMap->max_col = a - 1;
	a = 0;
	e = 0;
	while (a <= newMap->max_row)
	{
		e = 0;
		while (e <= newMap->max_col)
		{
			matrix[a][e] = arr[i];
			i++;
			if (arr[i] == '\n')
			{
				i++;
			}
			e++;
		}
		a++;
	}
	return (matrix);
}
