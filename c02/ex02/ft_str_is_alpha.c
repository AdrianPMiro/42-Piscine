/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:52:11 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/21 14:42:43 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str);
int main(void)
{
        char dat[5] = "";
		ft_str_is_alpha(dat);
}
*/
int	ft_str_is_alpha(char *str)
{
	int		c;
	char	i;

	i = '1';
	c = 0;
	while (str[c] != '\0')
	{
		if (!((str[c] >= 'A' && str[c] <= 'Z')
				|| (str[c] >= 'a' && str[c] <= 'z' )))
		{
			return (0);
		}	
	c++;
	}
	return (1);
}
