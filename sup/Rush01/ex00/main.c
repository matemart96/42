/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:00:57 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/21 19:53:49 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_input_format(char *argv)
{
	int	i;

	i = 0;
	if (argv[31] != '\0')
		return (1);
	while (i < 31)
	{
		if ((i % 2 == 0) && (argv[i] > '4' || argv[i] < '1'))
			return (1);
		else if ((i % 2 == 1) && (argv[i] != ' '))
			return (1);
		i++;
	}
	return (0);
}

// int	ft_valid_viewers(char *argv)
// {
// 	int	i;
// 	int	n;
// 	int	arr[4];
// 	n = 0;
// 	i = 0;
// 	while (n < 4)
// 	{
// 		while (i < 8 && (i % 2 == 0))
// 		{
// 			arr[i/2] = argv[(8 * n + i)];
// 			if
// 		}
// 	}
// }

// int	**ft_malloc(int **m)
// {
// 	int	i;

// 	i = 0;
// 	m = (int **)malloc(sizeof(int*) * n);
// 	while(i < n - 1)
// 	{
// 		m[i] = (int*)malloc(sizeof(int)*m);
// 		i++;
// 	}
// 	return (*m)
// }

// int	***ft_malloc3d(int **m)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	m = (int **)malloc(sizeof(int*) * n);
// }

void	ft_tensor(int map[4][4][4])
{
	int	row;
	int	col;
	int	val;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			val = 0;
			while (val < 4)
			{
				map[row][col][val] = val + 1;
				if (val == 0)
					printf("|");
				printf("%d", map[row][col][val]);
				val++;
			}
			col++;
		}
		printf("\n");
		row++;
	}
}

int	condition(map[4][4][4])
{
	if map[]
}

int	assign_possibilities(int map[4][4][4], int possibilities[4][4][4])
{
	int	row;
	int	col;
	int	val;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			val = 0;
			while (val < 4)
			{
				map[row][col][val] = possibilities[row][col][val];
				if (val == 0)
					printf("|");
				printf("%d", map[row][col][val]);
				val++;
			}
			col++;
		}
		printf("\n");
		row++;
	}
}

int	main(int argc, char **argv)
{
	int	map[4][4][4];

	if (argc != 2 || ft_input_format(argv[1]) != 0)
	{
		write(2, &"Error\n", 6);
		return (1);
	}
	else
	{
		ft_tensor(map);
	}
	return (0);
}
