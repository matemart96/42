/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateomar <mateomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:30:34 by mateomar          #+#    #+#             */
/*   Updated: 2025/06/20 13:44:16 by mateomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	condition(char s)
{
	if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z') || (s >= '0'
			&& s <= '9'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((condition(str[i]) == 0) && (str[i + 1] >= 'A'
				&& str[i + 1] <= 'Z'))
			str[i + 1] = str[i + 1] + 32;
		else if ((condition(str[i]) == 1) && (str[i + 1] >= 'a'
				&& str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
		else if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}
