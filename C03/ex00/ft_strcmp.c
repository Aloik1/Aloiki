/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:09:45 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/20 18:43:08 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
		else
			i++;
	}
	return (0);
}
/*int     main(void)
{
    char s1[] = "ab";
    char s2[] = "abc";
    printf("%d", ft_strcmp(s1, s2));
    return 0;
}*/
