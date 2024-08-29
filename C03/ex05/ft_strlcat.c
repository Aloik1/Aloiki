/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:54:52 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/21 23:26:56 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
	{
		i++;
	}
	while (src[j] && size <= (i + j))
	{
		if (size > i)
			return (i + j);
		j++;
	}
	if (size <= i)
		return (size - 1);
}
/*int	main(void)
{
	char src[] = " Mundo";
	char dest[] = "Hola";
	printf("%d", ft_strlcat(src, dest, 2));
	return (0);
}*/
