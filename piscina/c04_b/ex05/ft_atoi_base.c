/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 17:12:47 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/25 18:09:53 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	basen;

	i = 0;
	sign = 1;
	result = 0;
	basen = ft_strlen(base);
	while (str[i] == ' ')
		i++;
	while ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while ((str[i] > '0') && (str[i] < '9'))
	{
		result = result * basen + str[i];
		i++;
	}
	return (sign * result);
}

int	main(void)
{
	printf("%d\n", ft_atoi_base("7afac13a", "0123456789abcdef"));
}
