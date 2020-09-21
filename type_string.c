/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:21:17 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/21 21:35:18 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

void    type_string(t_struct *flags)
{
    char *str;

    str = va_arg(flags->ap, char *);
    if (str == NULL)
        str = "(null)";
    flags->count = ft_strlen(str);
    if (flags->aux < 0)
        flags->precision = flags->count;
    if (flags->width)
        flag_width_string(flags, str);
        
}