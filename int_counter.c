/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_counter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 09:25:57 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/19 00:58:16 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	int_counter(t_struct *flags, int integer)
{
	char	*str;

	flags->flag_integer_negative = 0;
	if (integer < 0)
		flags->flag_integer_negative = 1;
	str = ft_itoa(integer);
	flags->count = ft_strlen(str);
}
