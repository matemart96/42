/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:11:36 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/26 17:05:49 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (dest[j])
		j++;
	if (size <= j)
		return (i + size);
	x = 0;
	while (src[i] && x < size - j - 1)
	{
		dest[x + j] = src[i];
		x++;
	}
	dest[x + j] = '\0';
	return (i + j);
}
