/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexade_low.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 12:49:56 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/01 13:39:22 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	print_hexade_low(t_struct *flags, unsigned int hexade)
{
	if (hexa != 0)
	{
		print_hexa_low(flags, hexa / 16);
		if (hexa % 16 >= 10)
		{
			ft_putchar('a' + (hexa % 16 % 10));
			flags->len++;
		}
		else
		{
			ft_putchar('0' + hexa % 16);
			flags->len++;
		}
	}
}