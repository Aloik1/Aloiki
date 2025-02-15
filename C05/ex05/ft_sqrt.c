/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:39:47 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/28 21:10:01 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb >= 0 && i < 46340)
	{
		while (i * i < nb)
			i++;
	}
	if (i * i == nb)
		return (i);
	else
		return (0);
}
