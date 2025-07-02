/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 21:10:34 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/16 21:46:54 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strcpy(char *dest, char *src);

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
}

int	main(void)
{
	char	str[] = "000000";
	char	ing[] = "asasas";
	
	printf("%s", str);
	printf("%s", ing);
	ft_strcpy(str, ing);
	printf("%s", str);
	printf("%s", ing);
	return (0);
}
