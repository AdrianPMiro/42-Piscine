/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:23:58 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/19 13:18:50 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*
void	ft_putchar(char c);


int	main(void)
{
	char	c;
	c = '5';
	ft_putchar(c);
	return (0);
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
