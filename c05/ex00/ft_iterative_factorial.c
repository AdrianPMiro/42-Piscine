/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:42:02 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/24 11:57:14 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
	int imp;
	imp = ft_iterative_factorial(0);
	printf("%d", imp);
}
*/

int	ft_iterative_factorial(int nb)
{
	int	b;

	b = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (b != 1)
	{
		b--;
		nb = nb * b;
	}
	return (nb);
}
