/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:40:59 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/24 13:27:25 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <bsd/string.h>
#include<string.h>
//char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "Holadios";
	char	dest[3];
	int n = 3;

	//ft_strncpy(dest, src, n);
	strncpy(dest, src, n);
	printf("%s", dest);
}
