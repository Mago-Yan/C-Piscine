/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 02:24:30 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/28 19:26:03 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			dest[50] = "aaaaaaaaaa";
	char			src[10] = "holaa";
	unsigned int	result;
	unsigned int	size;

	//src = 
	//dest 
	size = 12;
	result = ft_strlcat(dest, src, size);
	printf("%u\n", result);
	printf("%s", dest);
}
