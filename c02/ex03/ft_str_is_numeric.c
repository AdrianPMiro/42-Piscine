/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:52:11 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/22 20:23:31 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_str_is_alpha(char *str);
int main(void)
{
        char dat[3] = "98";
		ft_str_is_numeric(dat);
}
*/
int	ft_str_is_numeric(char *str)
{
	int		c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] <= '9' && str[c] >= '0'))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
