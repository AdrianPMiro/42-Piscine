/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NORM_stdin_func.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igsanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:04:13 by igsanche          #+#    #+#             */
/*   Updated: 2023/07/26 18:11:44 by igsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy_without_zero(char *dest, char *src, int n)
{
	char	*arr;
	int		i;

	i = 0;
	arr = src;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*stdin_func(void)
{
	char	*arr;
	char	*aux;
	int		fd;
	int		i;

	fd = 1;
	i = 0;
	arr = (char *) malloc (1 * sizeof(char));
	fd = read(1, &arr[0], 1);
	while (fd > 0)
	{
		i++;
		aux = (char *) malloc ((i + 1) * sizeof(char));
		ft_strcpy_without_zero(aux, arr, (i + 1));
		free (arr);
		fd = read(0, &aux[i], 1);
		arr = (char *) malloc ((i + 1) * sizeof(char));
		ft_strcpy_without_zero(arr, aux, (i + 1));
		free(aux);
	}
	arr[i] = '\0';
	return (arr);
}
