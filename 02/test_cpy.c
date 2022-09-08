/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:44:22 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/22 20:28:05 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
//#include <bsd/string.h>

//char	strncpy(char *dest, char *src, unsigned int n);
//unsigned int	strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char str_origen[] = "0123456789final";
	char str2[10];
	char str3[14];
	*(str_origen +15) = '0';
	printf("set.  ini  %p ; end %p \n" , &str_origen[0], &str_origen[15]);
	printf("src2. ini  %p ; end %p \n" , &str2[0], &str2[10]);
	printf("src3. ini  %p ; end %p \n" , &str3[0], &str3[14]);
	printf("str3_ = %s\n", strncpy(str3, "cadena limpia", 13));
	//printf("str2_ = %s\n", strncpy(str2, str_origen, 15));
}