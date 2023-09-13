/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:41:30 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/22 21:50:12 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char text[67] = "HELLO";
	ft_strcapitalize(text);
	printf("%s", text);
}
*/
char	*ft_strcapitalize(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 65 && str[c] <= 90)
			str[c] = str[c] + 32;
		c++;
	}
	c = 0;
	if (str[c] >= 'a' && str[c] <= 'z')
	{
		str[c] = str[c] - 32;
		c++;
	}
	while (str[c] != '\0')
	{
		if (!(str[c] >= 'a' && str[c] <= 'z'))
			if (!(str[c] >= '0' && str[c] <= '9'))
				if (!(str[c] >= 'A' && str[c] <= 'Z'))
					if (str[c + 1] >= 'a' && str[c + 1] <= 'z')
						str[c + 1] = str[c + 1] - 32;
	c++;
	}
	return (str);
}
