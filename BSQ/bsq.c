/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NORM_bsq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igsanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:12:31 by igsanche          #+#    #+#             */
/*   Updated: 2023/07/26 17:29:08 by igsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "structures.h"
#include <stdio.h>

int		get_arr_size(char *arr);
void	get_file_name(int i, char **argv, char *file_name);
char	*stdin_func(void);
int		check_syntax_of_map(char *arr);
char	*file_read(char	*file_name);
char	**save_arr_in_matrix(char *arr, map *new_map);
void	get_square(map *new_map, point *final_point, char **matrix);
void	write_map(point fpoint, char **matrix);

int	resolve_map(int i, char **argv)
{
	int		fns_val[2];
	char	*fn;
	char	*arr;
	char	**matrix;
	map		new_map;
	point	final_point;

	if (i != 0)
	{
		fns_val[0] = get_arr_size(argv[i]);
		fn = (char *) malloc ((fns_val[0] + 1) * sizeof(char));
		if (!fn)
			return (2);
		get_file_name(i, argv, fn);
		arr = file_read(fn);
	}
	else
		arr = stdin_func();
	fns_val[1] = check_syntax_of_map(arr);
	if (fns_val[1] != 1)
		return (4);
	matrix = save_arr_in_matrix(arr, &new_map);
	free(arr);
	get_square(&new_map, &final_point, matrix);
	write_map(final_point, matrix);
	return (0);
}

void	bsq(int nb, char **argv)
{
	int	i;
	int	val_response;

	i = 1;
	if (nb == 0)
	{
		val_response = resolve_map(0, argv);
	}
	val_response = resolve_map(i, argv);
	if (val_response != 0)
		write(1, "map error\n", 12);
}
