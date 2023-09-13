/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:18:15 by damedina          #+#    #+#             */
/*   Updated: 2023/07/08 13:18:54 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	f;
	int	c;

	f = 1;
	while (f <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((f == 1 && c == 1) || (f == y && c == x && f != 1 && c != 1))
				ft_putchar('/');
			else if ((f == 1 && c == x) || (f == y && c == 1))
				ft_putchar('\\');
			else if ((c > 1 && c < x && f == 1) || (c > 1 && c < x && f == y))
				ft_putchar('*');
			else if ((c == 1 && f > 1 && f < y) || (c == x && f > 1 && f < y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		f++;
	}
}
