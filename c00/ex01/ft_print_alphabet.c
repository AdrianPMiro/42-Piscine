/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:28:42 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/11 11:58:53 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
}
*/
void	ft_print_alphabet(void)
{
	int	n;

	n = 97;
	while (n < 123)
	{
		write(1, &n, 1);
		n++;
	}
}
