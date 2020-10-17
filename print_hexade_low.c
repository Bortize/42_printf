/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexade_low.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 12:49:56 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/12 19:30:55 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	print_hexade_low(t_struct *flags, unsigned int hexade)
{
	if (hexade != 0)
	{
		print_hexade_low(flags, hexade / 16);
		if (hexade % 16 >= 10)
		{
			ft_putchar('a' + (hexade % 16 % 10));
			flags->len++;
		}
		else
		{
			ft_putchar('0' + hexade % 16);
			flags->len++;
		}
	}
}
