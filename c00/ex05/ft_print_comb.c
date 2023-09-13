/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:14:04 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/14 08:34:48 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_raul(char a, char b, char c);

/*
void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
}
*/
void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_raul(x, y, z);
			z++;
			}
		y++;
		}
	x++;
	}
}

void	ft_raul(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write(1, ", ", 2);
	}
}
