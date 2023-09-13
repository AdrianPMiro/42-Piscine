int	es_numero(char num)
{
	if (num >= '0' && num <= '9')
	{
		return (1);
	}
	return (0);
}

int	get_final(int count, int *arr)
{
	int	siu;
	int	final;

	count--;
	siu = 1;
	final = 0;
	while (count >= 0)
	{
		final = final + arr[count] * siu;
		siu = siu * 10;
		count --;
	}
	return (final);
}

void	check_mas(char *str, int *sign, int *i)
{
	int	flag;

	flag = 0;
	while (str[*i] != '\0' && flag == 0)
	{
		if (str[*i] == '\t' || str[*i] == '\n' || str[*i] == '\v'
			|| str[*i] == '\f' || str[*i] == '\r' || str[*i] == ' ')
			(*i)++;
		else
			flag = 1;
	}
	flag = 1;
	while (str[*i] != '\0' && flag == 1)
	{
		if (str[*i] == '-')
		{
			*sign = *sign * (-1);
			(*i)++;
		}
		else if (str[*i] == '+')
			(*i)++;
		else
			flag = 2;
	}
}

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	count;
	int	flag;
	int	arr[12];

	flag = 0;
	count = 0;
	i = 0;
	sign = 1;
	check_mas(str, &sign, &i);
	flag = 2;
	while (str[i] != '\0' && flag == 2)
	{
		if (str[i] >= '0' && str[i] <= '9')
			arr[count++] = str[i++] - 48;
		else
			flag++;
	}
	return (get_final(count, arr) * sign);
}