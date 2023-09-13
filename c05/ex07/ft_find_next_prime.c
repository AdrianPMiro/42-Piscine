/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:47:01 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/24 13:19:47 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb);

/*
#include <stdio.h>
int ft_find_next_prime(int nb);

int main(void)
{
	printf("%d", ft_find_next_prime(98765));	
}
*/

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb == 0 || nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
		if (i > 3)
			i++;
	}
	return (1);
}
