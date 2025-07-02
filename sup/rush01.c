/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 14:48:03 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/14 18:39:18 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y);

void	rush(int x, int y)
{
	int	col;
	int	row;

	col = 1;
	row = 1;
	while (col <= y)
	{
		row = 1;
		while (row <= x)
		{
			if ((row == 1 && col == 1) || (col == y && row == x))
				ft_putchar('/');
			else if ((row == 1 && col == y) || (row == x && col == 1))
				ft_putchar('\\');
			else if (row == 1 || col == 1 || row == x || col == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			row++;
		}
		col++;
		ft_putchar('\n');
	}
}
