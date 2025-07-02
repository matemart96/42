/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:27:11 by zalabib-          #+#    #+#             */
/*   Updated: 2025/06/15 14:09:54 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y);

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
	int			row;
	int			col;
	int			t;
	long long	a;
	long long	b;

	a = (long long)x;
	b = (long long)y;
	t = __INT_MAX__;
	row = 1;
	if (a <= t || a >= -t - 1 || b <= t || b >= -t - 1)
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
