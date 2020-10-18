/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_minus_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 11:52:38 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/19 01:07:46 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_minus_string(t_struct *flags)
{
	flags->j = 0;
	if (flags->flag_precision && flags->precision < flags->count)
	{
		while (flags->j < (flags->width - flags->precision))
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
	}
	else
	{
		while (flags->j < (flags->width - flags->count))
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
	}
}
