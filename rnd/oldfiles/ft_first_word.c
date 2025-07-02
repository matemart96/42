#include <unistd.h>

int	ft_first_word(char *argv)
{
	int i;

	i = 0;
	while (!(argv[i] == ' ' || (argv[i] >= 9 && argv[i] <= 13)))
	{
		write(1, &argv[i], 1);
		i++;
	}
	return (0);
}
