/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 21:29:30 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/16 13:22:00 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int		int_crash_test(int x);

int	int_crash_test(int x)
{
	int			imx;
	long long	lx;

	lx = (long long)x;
	imx = __INT_MAX__;
	if (lx <= imx || lx >= -imx - 1)
		return (0);
	else
		return (1);
}

void	ft_putnbr(int nb)
{
	int	a;
	int	digs;

	digs = 1000000000;
	if (int_crash_test(nb) == 0)
	{
		while (digs > 1)
		{
			if (nb / digs != 0)
			{
				a = ((nb / digs) % 10) + '0';
				write(1, &a, 1);
			}
			digs = digs / 10;
		}
		a = nb % 10 + '0';
		write(1, &a, 1);
	}
}
