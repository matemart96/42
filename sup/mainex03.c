/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:20:45 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/18 19:57:34 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
      char    src[7] = "aaaaaa";
      char    dest[6] = "bbbbb";

      *dest = *ft_strcat(dest, src);
      // si intentas dest = ft_strcat no se puede porque no puedes asignar a un array la salida de la función, tienes que asignar la dirección
      printf("%s", dest);
      return (0);
}
