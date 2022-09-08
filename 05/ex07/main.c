/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:18:52 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/03 19:39:56 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_find_next_prime(int nb);

int	main(void)
{
	int	nb;
	
	nb = -13;
	printf("el siguiente primo a %d es %d\n", nb, ft_find_next_prime(nb));
}

