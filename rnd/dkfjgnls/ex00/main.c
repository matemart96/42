/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillsan <guillsan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 16:09:49 by guillsan          #+#    #+#             */
/*   Updated: 2025/06/22 21:52:59 by guillsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

void	ft_throw_error(void);
int		ft_parse_observers(char *argv_one, int observers[16]);
void	ft_initialize_map(int map[SIZE][SIZE]);
void	ft_print_map(int map[SIZE][SIZE]);
int		ft_solve(int row, int col, int map[SIZE][SIZE], int *observers);

int	main(int argn, char **argv)
{
	int	map[SIZE][SIZE];
	int	observers[SIZE * 4];
	int	i;

	i = 0;
	if (argn != 2)
	{
		ft_throw_error();
		return (1);
	}
	if (ft_parse_observers(argv[1], observers))
	{
		ft_throw_error();
		return (1);
	}
	ft_initialize_map(map);
	if (ft_solve(0, 0, map, observers) == 1)
		ft_print_map(map);
	else
	{
		ft_throw_error();
		return (1);
	}
	return (0);
}
