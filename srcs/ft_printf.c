/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:13:54 by dbelpaum          #+#    #+#             */
/*   Updated: 2021/11/27 14:59:20 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parse_format(char c, va_list params)
{
	int	charsprinted;

	charsprinted = 0;
	if (c == 'c')
		charsprinted = format_c(params);
	else if (c == 's')
		charsprinted = format_s(params);
	else if (c == 'p')
		charsprinted = format_p(params);
	else if (c == 'd' || c == 'i')
		charsprinted = format_d(params);
	else if (c == 'u')
		charsprinted = format_u(params);
	else if (c == 'x')
		charsprinted = format_x(params);
	else if (c == 'X')
		charsprinted = format_x_uppercase(params);
	else if (c == '%')
		charsprinted = format_percent();
	return (charsprinted);
}

int	ft_printf(const char *format, ...)
{
	va_list	params;
	int		charsprinted;

	charsprinted = 0;
	va_start(params, format);
	while (*format)
	{
		if (*format == '%')
		{
			charsprinted += parse_format(*(format + 1), params);
			format += 2;
		}
		else
		{
			ft_putchar_fd((char)*format++, 1);
			charsprinted++;
		}
	}
	va_end(params);
	return (charsprinted);
}
