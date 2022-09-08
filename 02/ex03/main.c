/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:39:51 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/22 12:25:53 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char str[] = "a0123456789";
	int si_o_no;

	si_o_no = ft_str_is_numeric(str);
	printf("%d", si_o_no);

}


