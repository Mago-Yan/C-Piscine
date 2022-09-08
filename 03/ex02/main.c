/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:07:36 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/27 00:38:25 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include  <stdio.h>
char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src[20] = "holushdfiush";
	char	dest[100] = "quetalaaaaaaa";

	//dest = "quetalaaaaaaa";
	//ft_strcat(dest, src);
	printf("%s", ft_strcat(dest, src));
	return (0);
}