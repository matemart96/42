/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:20:45 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/18 19:48:18 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "AAAA";
	char	s2[] = "AAAAV";
	unsigned int	u;

	u = 2;
	printf("%d\n", ft_strncmp(s1, s2, u));
	return(0);
}
