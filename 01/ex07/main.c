/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:51:59 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/21 12:23:56 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int tab[4] = {1, 2, 3, 4};
	int size = 4;
	printf("%d%d%d%d", tab[0],tab[1],tab[2],tab[3]);
	ft_rev_int_tab(tab, size);
	printf("%d%d%d%d", tab[0],tab[1],tab[2],tab[3]);
}

