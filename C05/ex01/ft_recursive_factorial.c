/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:13:12 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/28 21:23:53 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb >= 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
	return (nb);
}
