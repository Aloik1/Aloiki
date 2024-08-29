/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 10:24:45 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/11 13:50:14 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	p;

	neg = 'N';
	p = 'P';
	if (n < 0)
	{
		write (1, &neg, 1);
	}
	else
	{
		write (1, &p, 1);
	}
}

/*int	main(void)
{
	ft_is_negative('n');
}*/
