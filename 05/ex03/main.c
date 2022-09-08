/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:18:52 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/03 17:49:23 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;

	power = 1;
	nb = 4;
	printf("%d", ft_recursive_power(nb, power));
}

