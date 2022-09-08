/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 00:49:43 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/28 20:05:30 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*str;
	char	*new_str;
	char	*to_find;

	str = "holaaa";
	to_find = "li";
	new_str = ft_strstr(str, to_find);
	printf("%s\n", new_str);
	return (0);
}