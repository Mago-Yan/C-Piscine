/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:00:53 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/23 16:35:31 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	alphanum(char c)
{
	int	t;

	t = 0;
	if (c >= '0' && c <= '9')
		t = 1;
	else if (c >= 'A' && c <= 'Z')
		t = 1;
	else if (c >= 'a' && c <= 'z')
		t = 1;
	return (t);
}

int	alpha_lowcase(char c)
{
	int	t;

	t = 0;
	if (c >= 'a' && c <= 'z')
		t = 1;
	return (t);
}

int	alpha_upcase(char c)
{
	int	t;

	t = 0;
	if (c >= 'A' && c <= 'Z')
		t = 1;
	return (t);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{	
		j = 0;
		while (alphanum(str[i]) == 1)
		{	
			if (alpha_lowcase(str[i]) == 1 && j == 0)
			{
				str[i] -= 32;
				j = 1;
			}
			else if (alpha_upcase(str[i]) == 1 && j != 0)
				str[i] += 32;
			else
				j = 1;
			i++;
		}
		i++;
	}
	return (str);
}
