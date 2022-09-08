/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:18:26 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/23 16:00:55 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	dec_hex_tens(char c)
{
	int		hex_tens;
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	hex_tens = c / 16;
	return (hex_digits[hex_tens]);
}

char	dec_hex_units(char c)
{
	int		hex_units;
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	hex_units = c % 16;
	return (hex_digits[hex_units]);
}

int	non_printable(char c)
{
	if (c < 32 || c == 127)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i])
	{
		if (non_printable(str[i]) == 1)
		{	
			write(1, "\\", 1);
			a = dec_hex_tens(str[i]);
			write(1, &a, 1);
			a = dec_hex_units(str[i]);
			write(1, &a, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
