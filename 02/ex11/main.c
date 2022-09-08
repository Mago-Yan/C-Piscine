/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:15:05 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/23 16:32:44 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putstr_non_printable(char	*str);

int	main(void)
{
	char	str[] = "holaquet\nal";

	ft_putstr_non_printable(str);
	return (0);
}
