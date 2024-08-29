/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:17:49 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/13 19:39:07 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	save;
	int	i;

	first = 0;
	last = 0;
	save = 0;
	last = size - 1;
	while (first <= last)
	{
		i = 0;
		while (i < last)
		{
			if (tab[i + 1] < tab[i])
			{
				save = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = save;
			}
			i++;
		}
		first++;
	}
}
