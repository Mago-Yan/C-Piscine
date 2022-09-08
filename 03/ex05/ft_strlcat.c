/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 02:00:21 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/28 19:22:48 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total_dest;
	unsigned int	total_src;

	total_dest = ft_len(dest);
	total_src = ft_len(src);
	i = total_dest;
	j = 0;
	if (size < 1)
		return (total_src + size);
	while (src[j] && i < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < total_dest)
		return (total_src + size);
	else
		return (total_dest + total_src);
}
