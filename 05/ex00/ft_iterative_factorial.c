/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:16:15 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/03 21:09:19 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	iter;

	i = 1;
	iter = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i < iter)
	{
		nb *= iter - i;
		i++;
	}
	return (nb);
}
