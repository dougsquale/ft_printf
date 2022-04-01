/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:34:18 by dbelpaum          #+#    #+#             */
/*   Updated: 2021/11/27 15:17:35 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_u(va_list params)
{
	unsigned int	value;
	int				strlen;

	value = (unsigned int)va_arg(params, int);
	ft_putunsignednbr_fd(value, 1);
	if (value == 0)
		return (1);
	strlen = 0;
	while (value)
	{
		value = value / 10;
		strlen++;
	}
	return (strlen);
}
