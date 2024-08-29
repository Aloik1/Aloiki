/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:47:06 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/20 12:03:32 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	special(char *str, int i)
{
	if (str[i] == str[0] && str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;
	else if (str[i - 1] >= 32 && str[i - 1] <= 47)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	else if (str[i - 1] >= 58 && str[i - 1] <= 64)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	else if (str[i - 1] >= 91 && str[i - 1] <= 96)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	else if (str[i - 1] >= 123)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	else if (str[i] >= 65 && str[i] <= 90 && str[i] != str[0])
		str[i] = str[i] + 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		special(str, i);
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char str[61] = "s quaranVte-de:ux; cinqua~nte+et+un";
	printf("%s", ft_strcapitalize(str));
	return 0;
}*/
