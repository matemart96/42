/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:18:37 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/14 17:59:54 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rush(int x, int y);

void	rush(int x, int y)
{
	int	col;
	int	row;

	col = 1;
	row = 1;
	while (col <= y)
	{
		ft_putchar('*');
		if (x == row)
		{
			ft_putchar('\n');
			row = 0;
			col++;
		}
		row++;
	}
}
