/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:25:09 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/10 18:32:18 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	numa;
	char	numb;
	char	numc;

	numa = '0';
	while (numa <= '7')
	{
		numb = numa + 1;
		while (numb <= '8')
		{
			numc = numb + 1;
			while (numc <= '9')
			{
				write (1, &numa, 1);
				write (1, &numb, 1);
				write (1, &numc, 1);
				if (numa != '7' || numb != '8' || numc != '9')
					write (1, ", ", 2);
				numc++;
			}
			numb++;
		}
		numa++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
