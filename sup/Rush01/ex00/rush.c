/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:09:02 by mtikhono          #+#    #+#             */
/*   Updated: 2025/06/22 17:09:33 by mateomar         ###   ########.fr       */
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

void	ft_init_map(char map[4][4][4])
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			z = 0;
			while (z < 4)
			{
				map[x][y][z] = '1';
				z++;
			}
			y++;
		}
		x++;
	}
}

void	ft_assign_possibilities(char cell[4], char possibilities[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (cell[i] == '1' && possibilities[i] == '0')
		{
			cell[i] = '0';
		}
		i++;
	}
}

char	*ft_negated_string(char str[4])
{
	int		i;
	char	strr[4];

	i = 0;
	while (i < 4)
	{
		if (str[i] == '1')
		{
			strr[i] = '0';
			i++;
		}
		else if (str[i] == '0')
		{
			strr[i] = '1';
			i++;
		}
	}
	return (strr);
}

void	ft_found_value(char value[4], int location[2], char map[4][4][4])
{
	int		i;
	char	*negated;

	i = 0;
	printf("%s\n", value);
	negated = ft_negated_string(value);
	printf("%s\n", negated);
	while (i < 4)
	{
		if (i != location[1])
			ft_assign_possibilities(map[location[0]][i], negated);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (i != location[0])
			ft_assign_possibilities(map[i][location[1]], negated);
		i++;
	}
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
		n++;
	while (src[i] != '\0')
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}

void	ft_process_hints(char hints[16], char map[4][4][4])
{
	int	hint_id;
	int	coord[2];

	hint_id = 0;
	while (hint_id < 4)
	{
		if (hints[hint_id] == 4)
		{
			ft_assign_possibilities(map[0][hint_id], "1000");
			coord[0] = 0;
			coord[1] = hint_id;
			printf("%d%d\n", coord[0], coord[1]);
			ft_found_value("1000", coord, map);
			ft_assign_possibilities(map[1][hint_id], "0100");
			// ft_found_value("0100", strcat("1", (char)hint_id), map[4][4][4]);
			ft_assign_possibilities(map[2][hint_id], "0010");
			// ft_found_value("0010", strcat("2", (char)hint_id), map[4][4][4]);
			ft_assign_possibilities(map[3][hint_id], "0001");
			// ft_found_value("0001", strcat("3", (char)hint_id), map[4][4][4]);
		}
		hint_id++;
	}
}

void	ft_print_cell(char map[4][4][4])
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
				if (val == 0)
					printf("|");
				printf("%c", map[row][col][val]);
				val++;
			}
			col++;
		}
		printf("\n");
		row++;
	}
}

int	main(void)
{
	char	raw_hints[32] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	char	hints[16];
	char	map[4][4][4];

	ft_parse_hints(raw_hints, hints);
	ft_init_map(map);
	ft_process_hints(hints, map);
	ft_print_cell(map);
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	char hints[16];
// 	char map[4][4][4];

// 	if (argc != 2 || ft_input_format(argv[1]) != 0)
// 	{
// 		write(2, &"Error\n", 6);
// 		return (1);
// 	}
// 	ft_parse_hints(argv[1], hints);
// 	ft_init_map(map);
// 	ft_process_hints(hints, map);
// 	ft_print_cell(map);
// 	return (0);
// }