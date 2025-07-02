/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:27:11 by zalabib-          #+#    #+#             */
/*   Updated: 2025/06/15 15:28:50 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y);

int		crash_test(int x, int y);

int	crash_test(int x, int y)
{
	int			imx;
	long long	lx;
	long long	ly;

	lx = (long long)x;
	ly = (long long)y;
	imx = __INT_MAX__;
	if (lx <= imx || lx >= -imx - 1 || ly <= imx || ly >= -imx - 1)
		return (0);
	else
		return (1);
}

void	printing(int x, int y, int row, int col)
{
	if ((row == 1 && col == 1) || (row == y && col == x && x > 1 && y > 1))
		ft_putchar('/');
	else if ((row == 1 && col == x) || (row == y && col == 1))
		ft_putchar('\\');
	else if (row == 1 || row == y || col == 1 || col == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	if (crash_test(x, y) == 0)
	{
		while (row <= y)
		{
			col = 1;
			while (col <= x)
			{
				printing(x, y, row, col);
				col++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}
