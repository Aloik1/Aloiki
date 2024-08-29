/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:56:01 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/10 18:33:51 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	az;

	az = 'a';
	while (az <= 'z')
	{
		write (1, &az, 1);
		az++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
}*/
