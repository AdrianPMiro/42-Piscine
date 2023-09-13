/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:41:08 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/21 14:25:12 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
		char original[5] = {'a', 'b', 'c', 'h'};
		char copia[5];
		ft_strcpy(copia, original);
		printf("%s\n", original);
		printf("%s", copia);
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	char	*a;
	int		c;

	c = 0;
	a = src;
	while (a[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = src[c];
	return (dest);
}
