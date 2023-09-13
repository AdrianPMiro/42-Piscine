/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:41:30 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/23 23:20:18 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	hexa(char *str, int i);
/*
#include <stdio.h>
void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char text[67] = "Cou cou\ntu vas bien ?";
	ft_putstr_non_printable(text);
}
*/
void	ft_putstr_non_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 32 && str[c] <= 126))
		{
			write (1, &str[c], 1);
			c++;
		}	
		if (!(str[c] >= 32 && str[c] <= 126) && str[c] != '\0')
		{	
			hexa(str, c);
			c++;
		}
	}
}

void	hexa(char *str, int i)
{
	char	d1;
	char	d2;
	char	*libhex;

	libhex = "0123456789abcdef";
	write(1, "\\", 1);
	d1 = libhex [str[i] / 16];
	d2 = libhex [str[i] % 16];
	write(1, &d1, 1);
	write(1, &d2, 1);
}
