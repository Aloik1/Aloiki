/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:09:16 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/20 18:46:26 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				dest;

	i = 0;
	while ((s1[i] || s2[i]) && (n > i))
	{
		if (s1[i] != s2[i])
		{
			dest = s1[i] - s2[i];
			return (dest);
		}
		else
			i++;
	}
	return (0);
}
/*int     main(void)
{
    char s1[] = "Hedlo";
    char s2[] = "Hello";
    printf("%d", ft_strncmp(s1, s2, 3));
    return (0);
}*/
