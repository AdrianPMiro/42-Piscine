/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:41:08 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/23 15:25:20 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	main(void)
{
		char original[5] = "abcd";
		char copia[5];
		unsigned int n = ft_strlcpy(copia, original, 60);
		printf("copia: %s\n", copia);
		printf("Longitud de la copia: %u\n", n);
}
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;

	c = 0;
	if (size == 0)
	{
		while (src[c] != '\0')
		{
			c++;
		}
		return (c);
	}
	c = 0;
	while (src[c] != '\0' && c < size -1)
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (c);
}
