/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:41:30 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/22 20:20:11 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char *ft_strupcase(char *str);

int	main(void)
{
	char text[5] = "hola";
	ft_strupcase(text);
}
*/

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 97 && str[c] <= 122)
		{
			str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
}
