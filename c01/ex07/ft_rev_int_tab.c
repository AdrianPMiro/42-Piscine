/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:56:55 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/14 15:07:49 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
/*
void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[4] = {4, 5, 1, 2};

	ft_rev_int_tab (tab, 4);
	printf("%d\n", tab[0]);
	printf("%d\n", tab[1]);
	printf("%d\n", tab[2]);
	printf("%d", tab[3]);
}
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	aux;

	a = 0;
	b = size -1;
	while (a < (size / 2))
	{
		aux = tab[a];
		tab[a] = tab[b];
		tab[b] = aux;
		a++;
		b--;
	}
}
