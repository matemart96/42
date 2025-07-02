/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 22:58:21 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/30 16:28:15 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *a, char *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int	s;
	int	e;

	s = 0;
	e = 0;
	while (s < argc)
	{
		e = 0;
		while (e < argc)
		{
			while (ft_strcmp(argv[s], argv[argc - e - 1]) < 0)
				e++;
			if (ft_strcmp(argv[s], argv[argc - e - 1]) >= 0)
				ft_swap(argv[s], argv[argc - e - 1]);
		}
		s++;
	}
}
