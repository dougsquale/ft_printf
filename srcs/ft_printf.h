/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:13:57 by dbelpaum          #+#    #+#             */
/*   Updated: 2021/11/26 20:43:24 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

int		parse_format(char c, va_list params);
int		ft_printf(const char *format, ...);

/*-----Formats-----*/
int		format_percent(void);
int		format_c(va_list params);
int		format_d(va_list params);
int		format_p(va_list params);
int		format_s(va_list params);
int		format_u(va_list params);
int		format_x(va_list params);
int		format_x_uppercase(va_list params);

#endif