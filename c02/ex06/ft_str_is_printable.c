/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:52:11 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/23 15:23:21 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*
#include <stdio.h>

int	ft_str_is_alpha(char *str);
int	main(void)
{
        char dat[100] = "Aadknakd9i87{}}";
		ft_str_is_printable(dat);
}
*/

int	ft_str_is_printable(char *str)
{
	int		c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 32 && str[c] <= 126))
		{
			return (0);
		}
	c++;
	}
	return (1);
}
