/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 23:14:46 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/26 23:14:48 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*m;
	int		i;
	int		n;

	i = 0;
	n = ft_strlen(src);
	m = (char *)malloc(sizeof(src));
	while (src[i])
	{
		m[i] = src[i];
		i++;
	}
	return (*m);
	free(m);
}
