/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 14:42:35 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/15 14:20:07 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	main(void)
{
	int	x;
	int	y;

	x = (int) 0xFFFFFFFFFFFFFFF0;
	y = (int) 0xFFFFFFFFFFFFFFF0;
	y = -y;
	rush(y, x);
}
