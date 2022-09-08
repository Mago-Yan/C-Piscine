Q/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:26:42 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/21 13:22:40 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	z;

	j = 0;
	while (j < size - 1)
	{
		i = j + 1;
		while (i < size)
		{
			if (tab[j] > tab[i])
			{
				z = tab[j];
				tab[j] = tab[i];
				tab[i] = z;
			}
			i++;
		}
		j++;
	}
}
