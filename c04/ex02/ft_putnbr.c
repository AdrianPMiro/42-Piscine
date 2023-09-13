/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:40:27 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/24 00:42:20 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_chema(int c);

/*
void	ft_putnbr(int nb);


int	main(void)
{
	ft_putnbr(-2147483648);
}
*/
void	ft_putnbr(int nb )
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
		ft_chema(nb);
	}
	else
	{
		ft_chema(nb);
	}
}

void	ft_chema( int c)
{
	char	paco;

	if (c >= 10)
	{
		ft_putnbr (c / 10);
	}
	paco = c % 10 + '0';
	write(1, &paco, 1);
}
