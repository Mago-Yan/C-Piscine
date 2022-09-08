/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:03:36 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/24 12:48:37 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			src[9] = "123456789";
	char			dest[4];
	unsigned int	n;

	//n = ft_strlcpy(dest, src, 3);
	n = strlcpy(dest, src, 3);
	printf("longitud copia = %d copia = %s", n, dest);
}
