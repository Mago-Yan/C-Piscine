/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:18:52 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/03 19:41:59 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb);

int	main(void)
{
	int	nb;
	
	nb = 0;
	while (nb < 1000)
	{
		if (ft_is_prime(nb))
			printf("%d es primo\n", nb);
		nb++;
	}
}

