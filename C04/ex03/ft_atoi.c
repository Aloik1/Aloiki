/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:43:36 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/26 22:02:10 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	process(char *str, int i, int num, int sign)
{
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = (num * 10) + str[i] - '0';
		i++;
	}
	return (num * sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	num = 0;
	i = 0;
	sign = 1;
	process(str, i, num, sign);
	return (process(str, i, num, sign));
}

/*int	main(int argc, char* argv[2])
{
	char	*str;

	argc = 2;
	str = argv[1];
	printf("%d", ft_atoi(str));
	return (0);
}*/
