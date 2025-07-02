/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillsan <guillsan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 16:09:49 by guillsan          #+#    #+#             */
/*   Updated: 2025/06/22 21:56:38 by guillsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

int		ft_count_visible(int *line, int direction);

int	ft_is_valid(int row, int col, int num, int map[SIZE][SIZE])
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (map[row][i] == num || map[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_row(int row, int *observers, int map[SIZE][SIZE])
{
	if ((observers[row + 8] == 0
			|| ft_count_visible(map[row], 0) == observers[row + 8])
		&& (observers[row + 12] == 0
			|| ft_count_visible(map[row], 1) == observers[row + 12]))
		return (1);
	return (0);
}

int	ft_check_col(int col, int *observers, int map[SIZE][SIZE])
{
	int	col_temp[SIZE];
	int	i;

	i = 0;
	while (i < SIZE)
	{
		col_temp[i] = map[i][col];
		i++;
	}
	if ((observers[col] == 0
			|| ft_count_visible(col_temp, 0) == observers[col])
		&& (observers[col + SIZE] == 0
			|| ft_count_visible(col_temp, 1) == observers[col + SIZE]))
		return (1);
	return (0);
}

void	ft_calculate_next_pos(int row, int col, int *next_row, int *next_col)
{
	if (col == SIZE - 1)
	{
		*next_row = row + 1;
		*next_col = 0;
	}
	else
	{
		*next_row = row;
		*next_col = col + 1;
	}
}

int	ft_solve(int row, int col, int map[SIZE][SIZE], int *observers)
{
	int	next_row;
	int	next_col;
	int	i;

	i = 1;
	if (row == SIZE)
		return (1);
	ft_calculate_next_pos(row, col, &next_row, &next_col);
	while (i <= SIZE)
	{
		if (ft_is_valid(row, col, i, map))
		{
			map[row][col] = i;
			if (!((col == SIZE - 1 && !ft_check_row(row, observers, map))
					|| (row == SIZE - 1 && !ft_check_col(col, observers, map))))
			{
				if (ft_solve(next_row, next_col, map, observers))
					return (1);
			}
			map[row][col] = 0;
		}
		i++;
	}
	return (0);
}
