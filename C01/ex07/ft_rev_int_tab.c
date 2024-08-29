/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:07:32 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/13 19:03:47 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	save;

	last = 0;
	save = 0;
	first = 0;
	last = size - 1;
	while (first <= last)
	{
		save = tab[last];
		tab[last] = tab[first];
		tab[first] = save;
		first++;
		last--;
	}
}
