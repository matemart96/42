/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillsan <guillsan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 16:09:49 by guillsan          #+#    #+#             */
/*   Updated: 2025/06/22 23:34:38 by guillsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SIZE 4

void	ft_throw_error(void)
{
	write(1, "Error\n", 6);
}

int	ft_parse_observers(char *argv_one, int observers[16])
{
	int	i;

	i = 0;
	if (argv_one[31] != '\0')
		return (1);
	while (i < 31)
	{
		if (i % 2 == 0)
		{
			if (argv_one[i] > '4' || argv_one[i] < '1')
				return (1);
			else
				observers[i / 2] = argv_one[i] - '0';
		}
		else if ((i % 2 == 1) && (argv_one[i] != ' '))
			return (1);
		i++;
	}
	return (0);
}

void	ft_initialize_map(int map[SIZE][SIZE])
{
	int		i;
	int		j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			map[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_print_map(int map[SIZE][SIZE])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			c = map[i][j] + '0';
			write(1, &c, 1);
			if (j < SIZE - 1)
				write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

int	ft_count_visible(int *line, int direction)
{
	int	max;
	int	i;
	int	value;
	int	count;

	max = 0;
	count = 0;
	i = 0;
	while (i < SIZE)
	{
		if (direction == 0)
			value = line[i];
		else
			value = line[SIZE - 1 - i];
		if (value > max)
		{
			max = value;
			count++;
		}
		i++;
	}
	return (count);
}
