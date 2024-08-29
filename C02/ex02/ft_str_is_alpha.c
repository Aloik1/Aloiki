/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:31:46 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/19 17:45:30 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			i++;
		else if (str[i] > 64 && str[i] < 91)
			i++;
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	char	str[] = "";
	printf("%d", ft_str_is_alpha(str));
	return(0);
}*/
