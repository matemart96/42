/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:28:11 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/16 20:01:46 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (&tab[i] > &tab[size -  j  - 1])
				ft_swap(&tab[i], &tab[size-j-1]);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	tab[] = {1, 2, 32, 5, 0};
	printf("%d", tab[0]);
	for(int i=0 ; i<5 ; ++i)
        {
                printf("%d", tab[i]);
        }
	printf(" ");
	ft_sort_int_tab(tab, 5);
	for(int i=0 ; i<5 ; ++i)
       	{
		printf("%d", tab[i]);
	}
}
