/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NORM_file_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igsanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:33:19 by igsanche          #+#    #+#             */
/*   Updated: 2023/07/26 17:34:58 by igsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*arr;
	int		i;

	i = 0;
	arr = src;
	while (arr[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	get_arr_size(char *arr)
{
	int	i;

	i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	get_file_name(int i, char **argv, char *file_name)
{
	ft_strcpy(file_name, argv[i]);
}
