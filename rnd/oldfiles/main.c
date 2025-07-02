/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmoyna <sanmoyna@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 20:29:47 by sanmoyna          #+#    #+#             */
/*   Updated: 2025/06/29 18:09:40 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	ft_putstr(char *strt)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

int     ft_atua(char *str)
{
        int     i;
        int     sign;
        int     result;
	int	j;
	int	access;

	j = 0;
        i = 0;
        sign = 1;
        result = 0;
	access = 0;
        while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
                i++;
        while ((str[i] == '-' || str[i] == '+'))
        {
                if (str[i] == '-')
                        return(1);
                i++;
        }
        while ((str[i+j] >= '0') && (str[i+j] <= '9'))
                j++;
        return (result * sign);
}

int	checkunisgned(char *argv1)
{
	long long int apoyo;

	apoyo = ft_atoi(argv1);
	if (apoyo > 2 * __INT_MAX__)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	char dict[20];
	int fd;
	int nbytes;
	
	nbytes = sizeof(dict);
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(2, "Error al abrir numbers.dict\n"28);
		retutn(1);
	}
	if (argc > 3)
	{
		ft_putstr ("Usage: ./rush-02 number    OR\nUsage: ./rush-02 referencedict number\n");
		return (1);
	}
	if (argc == 2)
		
	if (argc == 3)

	return (0);
}
