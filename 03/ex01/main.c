/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:43:07 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/01 14:14:23 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void){
  char str1[1];
  char str2[1];
  int result;

  str1[0] = "a";
  str2[0] = "a";

  // comparing strings str1 and str2
  result = strncmp(str1, str2, 0);
  printf("strncmp(str1, str2) = %d\n", result);

  return (0);
}
