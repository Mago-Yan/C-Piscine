/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:39:51 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/22 12:00:05 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char str[] = "HJ?";
	int si_o_no;

	si_o_no = ft_str_is_uppercase(str);
	printf("%d", si_o_no);

}


