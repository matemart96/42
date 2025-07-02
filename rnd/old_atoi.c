/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 20:06:38 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/24 15:41:53 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_power(int num, int base, int pow)
{
	int	i;
	int	res;

	i = 0;
	res = num - 48;
	while (i < pow)
	{
		res = res * base;
		i++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus_count;
	int	pow;
	int	result;

	i = 0;
	minus_count = 0;
	pow = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == '-')
			minus_count++;
		else if ((str[i] > '0') && (str[i] < '9'))
		{
			result = result + ft_power(str[i], 10, pow);
			pow++;
		}
		else if (!(str[i] == ' ' || str[i] == '+' ))
			return (result);
		i++;
	}
	if (minus_count % 2 == 1)
		result = -result;
	return (result);
}

int	main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	return (0);
}
