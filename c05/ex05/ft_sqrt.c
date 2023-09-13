/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:10:07 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/24 11:45:39 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
	printf("%d", ft_sqrt(2401));
}
*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (nb > 0)
	{	
		nb = nb - (2 * i - 1);
		i++;
	}
	if (nb == 0)
		return (i -1);
	return (0);
}
