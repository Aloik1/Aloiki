/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:47:18 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/27 13:29:45 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void    ft_swap(char **src, char **dest)
{
	int     j;
	int	first;
	int	last;

	j = 0;
	while (src[first][j] || dest[last][j])
	{
		src[first][j] = dest[last][j];
		j++;
	}
}

void	ft_strcmp(char **str, char **str2)
{
	int	save;
	int	i;
	int	first;
	int	last;

	i = 0;
	while (str[first][i] == str2[last][i])
		i++;
	if (str[first][i] != str2[last][i])
	{
		save = str[first][i] - str2[last][i];
		if (save < 0)
			ft_swap(&str[first], &str2[last]);
		else
			return;
	}
}

int	main(int argc, char **argv)
{
	int	first;
	int	last;
	int	save;
	int	i;

	first = 1;
	save = 0;
	last = argc - 1;
	while (first <= last)
	{
		i = 0;
		ft_strcmp(argv[first][i], argv[last][i]);
		first++;
	}
	
}
