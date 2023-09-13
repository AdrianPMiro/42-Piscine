/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chat5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:47:42 by adpedrer          #+#    #+#             */
/*   Updated: 2023/07/17 22:32:54 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	permute(int matrix[4][4], int row, int col, int a[16], int* count);
void	printm(int matrix[4][4]);
int		creatorcol(int i, int col, int row, int matrix[4][4]);
int		creatorrow(int i, int col, int row, int matrix[4][4]);
int		error(void);
int		verify(int argc, char *argv);
int		main_matrix(char *str);
int		flank1(int r[4]);
int		flank2(int r[4]);
int		*take_row(int M[4][4], int k);
int		*take_col(int M[4][4], int k);
int		mystrcmp(int *v1, int *v2);
int		*vect(int M[4][4]);

int main(int argc, char **argv)
{
    if (verify(argc, argv[1]) == 1)
        main_matrix(argv[1]);
    else
        error();
    return (0);
}

int verify(int argc, char *argv)
{
    int i;
    int r[16];

    if (argc != 2)
        return (0);
    i = 0;
    while (argv[i] != '\0')
    {
        if (i % 2 == 1 && argv[i] != ' ')
            return (0);
        if (i % 2 == 0)
        {
            r[i / 2] = argv[i] - '0';
            if (r[i / 2] < 1 || r[i / 2] > 4)
                return (0);
        }
        i++;
    }
    if (i != 31)
        return 0;
    return (1);
}

int error(void)
{
    write(1, "Error\n", 6);
    return (0);
}

int main_matrix(char *str)
{
    int matrix[4][4];
    int i;
    int j;
    int a[16];
    int count = 0;

    i = 0;
    while (i < 16)
    {
        a[i] = str[i * 2] - '0';
        i++;
    }
    i = 0;
    j = 0;
    while (i < 4)
    {
        while (j < 4)
        {
            matrix[i][j] = 0;
            j++;
        }
        j = 0;
        i++;
    }
    permute(matrix, 0, 0, a, &count);
    return (0);
}

void permute(int matrix[4][4], int row, int col, int a[16], int* count)
{
	int *vcomp;
	int i;

	vcomp = vect(matrix);
    if (*count >= 1)
        return;
    if (row == 4)
    {
        if (mystrcmp(a, vcomp) == 1)
        {
            printm(matrix);
            (*count)++;
        }
        return;
    }
    i = 1;
    while (i <= 4)
    {
        if (!creatorrow(i, col, row, matrix) && !creatorcol(i, col, row, matrix))
        {
            matrix[row][col] = i;
            if (col == 3)
            {
                permute(matrix, row + 1, 0, a, count);
            }
            else
            {
                permute(matrix, row, col + 1, a, count);
            }
            if (*count >= 1)
            {
				free(vcomp);
                return;
            }
        }
        i++;
    }
	free(vcomp);
}

int creatorrow(int i, int col, int row, int matrix[4][4])
{
    int j = 0;
    while (j < col)
    {
        if (matrix[row][j] == i)
            return 1;
        j++;
    }
    return (0);
}

int creatorcol(int i, int col, int row, int matrix[4][4])
{
    int j = 0;
    while (j < row)
    {
        if (matrix[j][col] == i)
            return 1;
        j++;
    }
    return (0);
}

void printm(int matrix[4][4])
{
    int i = 0;
    int j = 0;
    char txt;

    while (i < 4)
    {
        while (j < 4)
        {
            txt = matrix[i][j] + '0';
            write(1, &txt, 1);
            if (j < 3)
                write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
        j = 0;
        i++;
    }
}

int	flank1(int r[4])
{
	int i;
	int max;
	int n;

	max = 0;
	n = 0;
	i = 0;
	while (i < 4)
	{
		if (r[i] > max)
		{
			max = r[i];
			n++;
		}
		i++;
	}
	return (n);
}

int	flank2(int r[4])
{
	int i;
	int max;
	int n;
	
	max = 0;
	n = 0;
	i = 3;
	while (i >= 0)
	{
		if (r[i] > max)
		{
			max = r[i];
			n++;
		}
		i--;
	}
	return (n);
}

int *take_row(int M[4][4], int k)
{
	int i;
	int *r = (int *)malloc(16);

	i = 0;
	while (i < 4)
	{
		r[i] = M[k][i];
		i++;
	}
	return (r);
}

int	*take_col(int M[4][4], int k)
{
	int	i;
	int	*r = (int *)malloc(16);

	i = 0;
	while (i < 4)
	{
		r[i] = M[i][k];
		i++;
	}
	return (r);
}

int *vect(int M[4][4])
{
	int *r = (int *)malloc(64);
	int i;

	i = 0;
	while (i < 16)
	{
		if (i < 4)
			r[i] = flank1(take_col(M, i));
		else if (i < 8)
			r[i] = flank2(take_col(M, i - 4));
		else if (i < 12)
			r[i] = flank1(take_row(M, i - 8));
		else if (i < 16)
			r[i] = flank2(take_row(M, i - 12));
		i++;
	}
	return (r);
}

int mystrcmp(int *v1, int *v2)
{
	int i;

	i = 0;
	while (v1[i] == v2[i])
	{
		if (i == 15)
			return (1);
		i++;
	}
	return (0);
}
