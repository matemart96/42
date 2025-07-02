/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 22:55:14 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/30 17:15:18 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (argc - n - 1)
	{
		i = 0;
		while (argv[argc - n - 1][i])
		{
			write(1, &argv[argc - n - 1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		n++;
	}
}
