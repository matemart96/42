/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:42:16 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/27 13:14:38 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int basen;

	basen = ft_strlen(base);
	if (basen <= 1)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -__INT_MAX__ - 1)
			write(1, "2147483648", 11);
		else
			nb = -nb;
	}
	if (nb > ft_strlen(base) - 1)
		ft_putnbr_base(nb / basen, base);
	ft_putchar(base[nb % basen]);
}

int main()
{
	ft_putnbr(-2147483648, "0123456789");
}