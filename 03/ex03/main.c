/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:07:36 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/01 14:01:50 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include  <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	src[20] = "hooo";
	char	dest[100] = "que";
	int nb = 20;

	//ft_strcat(dest, src);
	printf("%s", ft_strncat(dest, src, nb));
	return (0);
}