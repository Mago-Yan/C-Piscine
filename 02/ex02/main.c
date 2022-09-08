/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:39:51 by pmillan-          #+#    #+#             */
/*   Updated: 2022/02/24 12:38:06 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_is_alpha(char *str);

int	main(void)
{
	char str[] = "jashfjakjdfahjk";
	int si_o_no;

	si_o_no = ft_str_is_alpha(str);
	printf("%d", si_o_no);
}
