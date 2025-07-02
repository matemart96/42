/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 17:12:47 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/27 12:12:02 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_charpos(char *str, char to_find)
{
	int	i;

	if (!to_find)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find)
			return (i);
		i++;
	}
	return (0);
}

int	ft_charstr(char *str, char to_find)
{
	int	i;

	if (!to_find)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find)
			return (1);
		i++;
	}
	return (0);
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
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (ft_charstr(base, str[i]))
	{
		result = result * basen + base[ft_charpos(base, str[i])];
		i++;
	}
	return (sign * result);
}

int	main(void)
{
	printf("%d\n", ft_atoi_base("10", "0123456789"));
}
