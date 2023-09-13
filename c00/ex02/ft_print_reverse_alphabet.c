/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:28:42 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/11 11:59:23 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_reverse_alphabet(void);

int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
void	ft_print_reverse_alphabet(void)
{
	int	n;

	n = 122;
	while (n > 96)
	{
		write(1, &n, 1);
		n--;
	}
}
