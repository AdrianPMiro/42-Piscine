/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:32:46 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/24 11:39:29 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
	int imp;
	imp = ft_iterative_power( 2, 9);
	printf("%d", imp);

}
*/

int	ft_iterative_power(int nb, int power)
{
	int	pato;

	pato = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		pato = pato * nb;
		power--;
	}
	return (pato);
}
