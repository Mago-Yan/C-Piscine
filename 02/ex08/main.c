/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:51:09 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/22 14:00:15 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char	*str);

int	main(void)
{
	char	str[] = "Hol\?\?\'\'aaZ";
	ft_strlowcase (str);
	printf("%s",str);
}
