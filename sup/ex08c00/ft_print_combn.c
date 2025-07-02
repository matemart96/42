/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 13:20:08 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/13 13:34:45 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(int n);

void	ft_print_comb(int n)
{
	if (0 < n && n < 10)
	{
	}
	else
	{
		write(1, &"error, n tiene que valer entre 1 y 9", 36);
	}
}

int	main(void)
{
	ft_print_comb(8);
	return (0);
}
