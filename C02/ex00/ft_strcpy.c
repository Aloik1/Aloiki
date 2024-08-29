/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:09:02 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/19 17:43:54 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
char	*ft_strcpy(char *dest, char *scr)
{
	unsigned int	i;

	i = 0;
	while (scr[i] != '\0')
	{
		dest[i] = scr[i];
		i++;
	}
	dest[i] = scr[i];
	return (dest);
}
/*int	main(void)
{
	char	scr[6] = "Byebye";
	char	dest[5] = "Hello"; 
	printf ("%s",ft_strcpy(dest, scr));
	return (0);
}*/
