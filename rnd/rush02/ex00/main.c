/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 20:29:47 by sanmoyna          #+#    #+#             */
/*   Updated: 2025/06/30 20:59:30 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_last_word(char *argv, int key)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 1;
	j = 0;
	k = 0;
	l = 0;
	while (key > 0)
	{
		if (argv[i] == '\n')
			key--;
		i++;
	}
	while (argv[i - j - 1] == ' ' || (argv[i - j - 1] >= 9 && argv[i - j
			- 1] <= 13))
		j++;
	while (!(argv[i - j - k - 1] == ' ' || (argv[i - j - k - 1] >= 9 && argv[i
				- j - k - 1] <= 13)))
		k++;
	while (argv[i - j - k + l] != '\n')
	{
		write(1, &argv[i - j - k + l], 1);
		l++;
	}
	write(1, " ", 1);
}

int	number_length(char *str)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	if (!*str)
		return (-1);
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13) || str[i] == '+')
		i++;
	if (str[i] == '-')
		write(1, "NEGATIVO NO ACEPTADO\n", 21);
	while ((str[i + length] >= '0') && (str[i + length] <= '9'))
		length++;
	return (length);
}

int	*ft_numberray(char *str)
{
	int	i;
	int	pos;
	int	*m;

	pos = 0;
	i = 0;
	if (number_length(str) == 0)
		return (NULL);
	m = (int *)malloc(sizeof(int) * number_length(str));
	if (!m)
		return (NULL);
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13) || (str[i] == '+'))
		i++;
	while ((str[i + pos] >= '0') && (str[i + pos] <= '9'))
	{
		m[pos] = str[i + pos] - '0';
		pos++;
	}
	return (m);
}

int	dictread(int fd, char *dict, int size, int *m)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (m[n])
		n++;
	read(fd, dict, size);
	while (m[i])
	{
		if (i % 3 != 1)
			ft_last_word(dict, m[i] + 1);
		if (i % 3 == 1)
			ft_last_word(dict, m[i] + 19);
		if (i % 3 == 0 && m[i] != 0)
			ft_last_word(dict, 29);
		if (n / 3 > 1)
		{
			if (i % 3 == 2)
			{
				ft_last_word(dict, 29 + (n - i) / 3);
			}
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	dict[690];
	int		fd;
	int		*m;

	if (argc > 3)
	{
		write(1, "Usage: ./rush-02 number\nUsage: ./rush-02 dict number\n", 53);
		return (1);
	}
	else if (argc == 2)
	{
		if (number_length(argv[1]) != -1)
			m = ft_numberray(argv[1]);
		fd = open("numbers.dict", O_RDONLY);
		if (fd == -1)
		{
			write(1, "Error al abrir numbers.dict\n", 28);
			return (1);
		}
		else
			dictread(fd, dict, 690, m);
	}
	return (0);
}
