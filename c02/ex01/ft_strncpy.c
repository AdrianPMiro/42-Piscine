/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:41:08 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/22 19:22:56 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
		char original[5] = {'a', 'b', 'c', 'h'};
		char copia[5];
		ft_strncpy(copia, original, 3);
	
		printf("%s\n", original);
		printf("%s", copia);
}
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
