/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:52:11 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/22 20:25:26 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str);
int main(void)
{
        char dat[5] = "AAA";
		ft_str_is_uppercase(dat);
}
*/
int	ft_str_is_uppercase(char *str)
{
	int		c;
	char	i;

	i = '1';
	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 'A' && str[c] <= 'Z' ))
		{
			return (0);
		}	
	c++;
	}
	return (1);
}
