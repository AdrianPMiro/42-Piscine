/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 21:40:54 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/14 12:14:02 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5] = {4, 5, 3, 7, 2};
	ft_sort_int_tab(tab, 5);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);

}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	i;
	int	aux;

	i = 0;
	c = 0;
	while (i < size)
	{
		c = 0;
		while (c < size -1)
		{
			if (tab[c] > tab[c + 1])
			{
				aux = tab[c];
				tab[c] = tab[c + 1];
				tab[c + 1] = aux;
			}
		c++;
		}
	i++;
	}
}
