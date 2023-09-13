/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:31:17 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/18 18:56:21 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*
int ft_strlen(char *str);

int main(void)
{
	char a[5] = "hola";
	ft_strlen(a);
}
*/
int	ft_strlen(char *str)
{
	int	c1;

	c1 = 0;
	while (str[c1] != '\0')
	{
		c1++;
	}
	return (c1);
}
