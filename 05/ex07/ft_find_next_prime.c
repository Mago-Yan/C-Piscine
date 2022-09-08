/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:56:52 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/03 21:28:16 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	divisors(int nb)
{
	int	i;
	int	n_of_divisors;

	n_of_divisors = 1;
	i = nb;
	while (i > 1)
	{
		if (nb % i == 0)
			n_of_divisors++;
		i--;
	}
	return (n_of_divisors);
}

int	ft_is_prime(int nb)
{
	if (nb == 0)
		return (0);
	if (divisors(nb) == 2)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	result;

	if (nb <= 1)
		return (2);
	result = nb;
	while (ft_is_prime(result) == 0)
		result++;
	return (result);
}
