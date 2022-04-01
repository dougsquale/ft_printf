/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:34:20 by dbelpaum          #+#    #+#             */
/*   Updated: 2021/11/27 15:11:39 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_x(va_list params)
{
	unsigned int	value;
	int				strlen;

	value = (unsigned int)va_arg(params, int);
	ft_putnbr_base((int)value, "0123456789abcdef");
	strlen = 0;
	if (value == 0)
		return (1);
	while (value)
	{
		value = value / 16;
		strlen++;
	}
	return (strlen);
}

int	format_x_uppercase(va_list params)
{
	unsigned int	value;
	int				strlen;

	value = (unsigned int)va_arg(params, int);
	ft_putnbr_base((int)value, "0123456789ABCDEF");
	strlen = 0;
	if (value == 0)
		return (1);
	while (value)
	{
		value = value / 16;
		strlen++;
	}
	return (strlen);
}
