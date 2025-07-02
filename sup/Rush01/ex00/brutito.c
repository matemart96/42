/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brutito.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:09:02 by mtikhono          #+#    #+#             */
/*   Updated: 2025/06/22 14:26:13 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>

void	ft_parse_hints(char *str, char hints[16])
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		if (*str > '0' && *str < '5')
		{
			hints[i] = *str - '0';
			i++;
		}
		str++;
	}
}

int	*fsee(int arr[4])
{
	int	i;
	int	count[2];
	int	max_n;
	int	dir;

	i = 0;
	max_n = arr[0];
	count[0] = 1;
	while (i < 3)
	{
		if (arr[i] < arr[i + 1])
		{
			max_n = arr[i + 1];
			count[0]++;
		}
		i++;
	}
	i = 4;
	count[1] = 1;
	max_n = arr[4];
	while (i > 0)
	{
		if (arr[i] < arr[i - 1])
		{
			max_n = arr[i - 1];
			count[1]++;
		}
		i--;
	}
	return (count);
}

int	factorial(int n)
{
	return (n <= 1) ? 1 : n * factorial(n - 1);
}

void	swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

void	permute(int *a, int l, int r, int **res, int *count)
{
	if (l == r)
	{
		for (int i = 0; i <= r; i++)
			res[*count][i] = a[i];
		(*count)++;
		return ;
	}
	for (int i = l; i <= r; i++)
	{
		swap(&a[l], &a[i]);
		permute(a, l + 1, r, res, count);
		swap(&a[l], &a[i]);
	}
}

int	**get_permutations(int n, int *total)
{
	int	**res;
	int	*a;
	int	count;

	*total = factorial(n);
	res = malloc(*total * sizeof(int *));
	for (int i = 0; i < *total; i++)
		res[i] = malloc(n * sizeof(int));
	a = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
		a[i] = i + 1;
	count = 0;
	permute(a, 0, n - 1, res, &count);
	free(a);
	return (res);
}

int	*transpose(int map[4][4])
{
	int	transposed[4][4];
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			transposed[j][i] = map[i][j];
			printf("%d", transposed[j][i]);
			j++;
		}
		i++;
	}
	return (transposed);
}

void	check(int map[4][4], int perm[24][4], char strr[16])
{
	int	i;
}

void	cosososo(int map[4][4], int perm[24][4], char strr[16])
{
	int	i;
	int	j;
	int	m;
	int	ss[8][2];
	int	*obs;

	i = 0;
	while (i < 8)
	{
		ss[i][0] = strr[i] - 48;
		ss[i][1] = strr[i + 4] - 48;
		i++;
	}
	i = 0;
	j = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 25)
		{
			obs = fsee(perm[j]);
			j++;
		}
		i++;
	}
}

void initmap(int map[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			map[i][j] = 1;
			j++;
		}
		i++;
	}
}

void	ft_print_map(char map[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (col == 0)
				printf("|");
			printf("%i|", map[col][row]);
			col++;
		}
		printf("\n");
		row++;
	}
}

int	main(int argc, char **argv)
{
	char	str[31] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	char	strr[16];
	int		i;
	int		j;
	int		map[4][4];
	int		*transposed;
	int		n;
	int		total;
	int		**perms;

	ft_parse_hints(str, strr);
	n = 4;
	perms = get_permutations(n, &total);
	//printf("%d\n", n);
	i = 0;
	// while (i < 24)
	// {
	// 	j = 0;
	// 	while (j < 4)
	// 	{
	// 		printf("%d", perms[i][j]);
	// 		j++;
	// 	}
	// 	i++;
	// 	printf("\n");
	// }
	initmap(map);
	printf("mapinha\n");
	ft_print_map(map);
	transposed = transpose(map);
	printf("transposinho\n");
	ft_print_map(transposed);
}
