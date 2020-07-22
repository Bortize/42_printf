/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 10:16:56 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/07/22 12:53:18 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	start_flags(t_struct *flags)
{
	flags->i = 0;
	flags->len = 0;
	flags->flag_minus = 0;
	flags->flag_zero = 0;
	flags->flag_aux = 0;
}
