/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:54:53 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/24 11:41:59 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
int ft_recursive_power(int nb, int power);

int main(void)
{
int imp;
	imp = ft_recursive_power( 2, 9);
	printf("%d", imp);	

}
*/

int	ft_recursive_power(int nb, int power)
{
	int	pato;

	pato = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		pato = nb * ft_recursive_power(nb, (power - 1));
	return (pato);
}
