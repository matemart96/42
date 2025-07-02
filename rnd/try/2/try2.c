/*int ft_strlen(char  *str)
{
	int		i;
	char	*dest;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}*/
/*
char	*ft_dup(char *str)
{
	dest = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}
*/
#include <stdio.h>
#include <stdlib.h>
//#include <stddef.h>

int	*ft_range(int min, int max)
{
	int	dif;
	int	i;
	int	*tab;
	i = 0;
	dif = max - min;
	dif = dif - 1;
	if (dif <= 0)
		return (NULL);
	tab = malloc(sizeof(int) * dif);
	while (i < dif - 1)
	{
		tab[i] = min + i;
        i++;
	}
	return (tab);
}

int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*tab;

	i = 0;
	min = 1;
	max = 10;
	tab = ft_range(min, max);
	while (i < max - min)
	{
		printf("%i", tab[i]);
		i++;
	}
}