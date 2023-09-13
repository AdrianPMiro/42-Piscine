/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:08:16 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/14 08:36:43 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_transitor(int e, int k);

/*
void	ft_print_comb2(void);

int	main( void )
{
	ft_print_comb2();
}
*/
void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x <= 99)
	{
		y = x +1;
		while (y <= 99)
		{
			ft_transitor(x, y);
		y++;
		}
	x++;
	}
}

void	ft_transitor( int e, int k)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = e / 10;
	b = e % 10;
	c = k / 10;
	d = k % 10;
	a = a + '0';
	b = b + '0';
	c = c + '0';
	d = d + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (e != 98)
	{
		write(1, ", ", 2);
	}
}
