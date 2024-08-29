/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 20:34:22 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/20 12:18:11 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				length;

	length = 0;
	i = 0;
	while (src[length] != 0)
		length++;
	while (i <= size)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
			dest[i] = '\0';
		i++;
	}
	return (length);
}
/*int	main(void)
{
	char src[] = "Hey";
	char dest[] = "Byebye";
	printf("%d", ft_strlcpy(dest, src, 4));
	return 0;
}*/
