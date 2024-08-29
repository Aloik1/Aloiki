/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:01:42 by ikondrat          #+#    #+#             */
/*   Updated: 2024/08/20 12:02:08 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_nonprintable(char *str)
{
	int		i;
	int		temp;
	int		temp2;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write (1, &str[i], 1);
		if (str[i] <= 31)
		{
			write(1, "\\", 1);
			temp = str[i] / 16;
			temp2 = str[i] % 16;
			write (1, &hex[temp], 1);
			write (1, &hex[temp2], 1);
		}
		i++;
	}
}
/*int	main(void)
{
	char	*str;
       	str = "hel\nlo";
	ft_putstr_nonprintable(str);
	return 0;
}*/
