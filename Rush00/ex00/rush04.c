/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:46:16 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/11 12:39:16 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_symbol(int x, int y, int col, int fil)
{
	if (x == 1 && y == 1)
		ft_putchar('A');
	else if ((x == 1 && fil == y) || (y == 1 && col == x))
		ft_putchar('C');
	else if ((col == 1 && fil == 1) || (col == x && fil == y))
		ft_putchar('A');
	else if ((col == x && fil == 1) || (col == 1 && fil == y))
		ft_putchar('C');
	else if (col != 1 && fil != 1 && fil != y && col != x)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	col;
	int	fil;

	if (x <= 0 || y <= 0)
		write(1, "Error", 5);
	fil = 1;
	while (fil <= y)
	{
		col = 1;
		while (col <= x)
		{
			print_symbol(x, y, col, fil);
			col++;
		}
		write(1, "\n", 2);
		fil++;
	}
}
