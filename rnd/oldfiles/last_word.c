#include <unistd.h>

int main(int argc, char**argv)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	if (argc != 2)
		return (1);
	while (argv[1][i])
		i++;
	i = i - 1;
	while (argv[1][i - j] == ' ' || (argv[1][i - j] >= 9 && argv[1][i - j] <= 13))
		j++;
	while (!(argv[1][i - j - k] == ' ' || (argv[1][i - j - k] >= 9 && argv[1][i - j - k] <= 13)))
		k++;
	k = k - 1;
	while (argv[1][i - j - k + l] != '\0')
	{
		write(1, &argv[1][i - j - k + l], 1);
		l++;
	}
	return (0);
}
