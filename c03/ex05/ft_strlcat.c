/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:31:02 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/24 00:19:38 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
/*
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	int a = 10;
	char dio[] = "hola";
	char nacho[] = "pesicola";

	ft_strlcat( dio, nacho, a);
	printf("%s", dio);
}
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0' && j < size)
	{
		j++;
	}
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	if (j != size)
		dest[j] = '\0';
	dest[j] = '\0';
	return (j);
}
