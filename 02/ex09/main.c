/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:23:38 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/23 16:35:18 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcapitalize(char	*str);

int	main(void)
{
	char str[] = "SAlUt, comment tu vas ?42Mots quarante-deux; cinquante+eT+un";	
	ft_strcapitalize(str);
	printf("%s", str);
}

