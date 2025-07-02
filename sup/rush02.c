/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:52:41 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/14 17:04:16 by mateomar         ###   ########.fr       */
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
	while (row <= x)
	{
		col = 0;
		while (col <= y)
		{
			ft_putchar('*');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}
