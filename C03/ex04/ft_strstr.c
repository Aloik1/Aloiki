/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:54:52 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/22 17:59:22 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	find;

	i = 0;
	if (!to_find)
		return (str);
	while (str[i])
	{
		find = 0;
		while (str[i + find] == to_find[find] && to_find[find])
			find++;
		if (to_find[find] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
int	main(void)
{
	char str[] = "hello world";
	char to_find[] = "llo";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}
