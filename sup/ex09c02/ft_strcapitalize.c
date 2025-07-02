/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:59:04 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/18 14:13:11 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strcapitalize(char *str)
{
	int	prev;

	prev = 0;
	while (*str)
	{
		if ((((*str >= 'A') && (*str <= 'Z')) || ((*str >= '0') && (*str <= '9'))) && (prev == 1))
		{
			*str = *str + 32;
			prev = 1;
		}
		else if (((*str >= 'a') && (*str <= 'z')) && (prev == 0))
		{
			*str = *str - 32;
			prev = 1;
		}
		else if ((((*str >= 'a') && (*str <= 'z'))) || ((*str >= '0') && (*str <= '9')))
			prev = 1;
		else 
			prev = 0;
		str++;
	}
	*str = '\0';
	//return (str);
}

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", str);
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
