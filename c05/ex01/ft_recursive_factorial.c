/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:45:59 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/24 11:48:38 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
	int imp;
	imp = ft_recursive_factorial(5);
	printf("%d", imp);
}
*/

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
	{
		return (0);
	}
	else
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
}
