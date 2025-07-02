/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:11:36 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/25 16:15:11 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	while (dest[i] && i < size)
		i++;
	len = i;
	j = 0;
	while (src[j] && i < size - len - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[j])
		j++;
	return (len + j);
}

int	main(void)
{
	char	dest[50] = "Hola como estas";
	char	src[50]  = " todo muy bien!";

	printf("resultado:%d", ft_strlcat(dest, src, sizeof(dest)));
	return (0);
}

