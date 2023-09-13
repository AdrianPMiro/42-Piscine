/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:01:00 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/26 12:13:37 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
int ft_atoi(char *str);


int main(void)
{
	char manuel[] = "1891240989680";
	int andrew;
	andrew = ft_atoi(manuel);	
	printf("%d", andrew);
}
int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	r;

	r = 0;
	i = 0;
	nb = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 12))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nb = nb * -1;
		i++;
	}
	while ( i != size)
	{
		r = r * 10 + str[i] - 48;
		i++;
	}
	r = r * nb;
	return (r);
}
