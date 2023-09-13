/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:19:23 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/24 12:50:20 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char paco[56] = "halaa";
	char chema[6] = "halay";
	printf("%d", ft_strncmp( paco, chema, 2));
}
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}	
		else if (s1[i] == '\0')
		{
			return (0);
		}
	i++;
	}	
	return (0);
}
