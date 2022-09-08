/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 02:46:09 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/20 03:01:03 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char str[] = "maria a dormir!";
	int	len;

	printf("%s", str);	
	len = 0;
	len = ft_strlen(str);
	printf("%d", len);
}
