/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 10:00:29 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/11 13:49:17 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	za;

	za = 'z';
	while (za >= 'a')
	{
		write (1, &za, 1);
		za--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
}*/
