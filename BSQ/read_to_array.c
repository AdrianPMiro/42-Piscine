/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NORM_read_to_array.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igsanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:24:03 by igsanche          #+#    #+#             */
/*   Updated: 2023/07/26 18:34:52 by igsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFF_SIZE 100

int	file_size(char *file_name)
{
	int		fd;
	int		dev;
	int		buff_read;
	char	buff[BUFF_SIZE];

	dev = 0;
	buff_read = 0;
	dev = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		return(0);
	}
	while ((buff_read = read(fd, buff, BUFF_SIZE)) != 0) 
		dev = dev + buff_read;
	if (buff_read == -1)
	{
		close(fd);
		return(0);
	}
	close(fd);
	return(dev);
}

char	*file_read(char *file_name)
{
	int	fd;
	int	size;
	char	*adev;
	size  = file_size(file_name);
	fd = open(file_name, O_RDONLY);

	adev = (char *) malloc((size +1) * sizeof(char));
	read(fd, adev, size);
	adev[size] = '\0';
	return (adev);
}

int	check_syntax_of_map(char *arr)
{
	int		i;
    char	vd;
    char	ob;
    char	cd;
    int		size;
    int		num;
    int		ini;
    int		lon;
    int		n;

	i = 0; 
	while (arr[i] != '\n')
	{
		i++;
	}
	if (!(i >= 4))
		return(0);
	size = i - 4;
	vd = arr[i -3];
	ob = arr[i - 2];
	cd = arr[i - 1];
	ini = i;
	if (!((ob >= 32 && ob <= 126) || (vd >= 32 && vd <= 126) || (cd >= 32 && cd <= 126)))
		return(0);
	if (vd == ob || ob == cd || vd == cd)
		return(0); 
	i = 0;
	num = 0;
	while (i <= size)
	{
		if( arr[i] >= '0' && arr[i] <= '9')
			i++;
		else
		{
			return(0);
		}
	}
	i = 0;
	while (i <= size && (arr[i] >= '0' && arr[i] <= '9'))
	{
		num = num * 10 + arr[i] - 48;
		i++;
	}

	ini++;
	if (arr[ini] == '\0')
	{
		return (0);
	}
	lon = 0;
	while (arr[ini] != '\n')
	{
		if (arr[ini] == vd || arr[ini] == ob)
		{
			lon++;
			ini++;
		}
		else
		{
			return(0);
		}
	}
	n = 1;
	ini++;
	while ( arr[ini] != '\0')
	{
		i = 0;
		while( arr[ini] != '\n')
		{
			if (arr[ini] == vd || arr[ini] == ob)
			{
				i++;
				ini++;
			}
			else
			return(0);
		}       
		if (lon != i)
			return(0);   
		ini++;
		n++;
	}
	if ( n != num) 
		return (0);
	return(1);
}
