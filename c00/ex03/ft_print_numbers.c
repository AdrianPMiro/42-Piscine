/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:51:52 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/11 11:59:46 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*
void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
}
*/
void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{	
		write(1, &n, 1);
		n++;
	}
}
