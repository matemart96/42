/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 21:29:30 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/24 19:23:55 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	aux;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0 && nb != -2147483648)
		write(1, "-", 1);
	else if (nb > 10)
		ft_putnbr(nb / 10);
	aux = nb % 10 + '0';
	write(1, &aux, 1);
}

int main(void)
{
	ft_putnbr(23423423);
	return (0);
}