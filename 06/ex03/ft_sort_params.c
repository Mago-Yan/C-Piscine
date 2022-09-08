/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 20:10:36 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/03 22:08:43 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strlencmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (i < j)
		return (-1);
	else if (i > j)
		return (1);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	char	*str;

	if (strlencmp(s1, s2) < 0)
		str = s2;
	else
		str = s1;
	i = 0;
	while (str[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(int *a, int *b)
{
	char	z;

	z = *b;
	*b = *a;
	*a = z;
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
}
