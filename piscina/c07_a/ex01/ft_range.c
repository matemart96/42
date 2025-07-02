/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:57:00 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/30 19:57:40 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int dif;
	int i;
	int *tab;

	i = 0;
	dif = max - min;
	dif = dif - 1;
	if (dif <= 0)
		return (0);
	tab = malloc(sizeof(int) * dif);
	while (i < dif - 1)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
