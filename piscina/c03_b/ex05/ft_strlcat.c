/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:11:36 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/24 22:13:39 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (len < size)
		dest[i] = '\0';
	while (src[j])
		j++;
	return (len + j);
}
