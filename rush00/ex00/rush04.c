/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:07:45 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/09 17:47:01 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	printer(int x, char a, char b, char c);

void	rush(int x, int y)
{
	int	c1;

	c1 = 0;
	if (x >= 1 && y >= 1)
	{
		while (c1 <= y - 1)
		{
			if (c1 == 0)
				printer(x, 'A', 'B', 'C');
			else if (c1 == y - 1)
				printer(x, 'C', 'B', 'A');
			else
				printer(x, 'B', ' ', 'B');
			c1++;
		}
	}
}

void	printer(int x, char a, char b, char c)
{
	int	c2;

	c2 = 0;
	while (c2 <= x - 1)
	{
		if (c2 == 0)
			ft_putchar(a);
		else if (c2 == x - 1)
			ft_putchar(c);
		else
			ft_putchar(b);
			c2++;
	}
	ft_putchar('\n');
}
