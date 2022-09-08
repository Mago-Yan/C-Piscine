/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 01:28:36 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/20 01:32:46 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a;
	int b;

	a = 11;
	b = 5;

	ft_ultimate_div_mod(&a, &b);
	
	printf("a=%d y b=%d", a, b);
}

