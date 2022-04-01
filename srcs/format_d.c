/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:34:14 by dbelpaum          #+#    #+#             */
/*   Updated: 2021/11/26 20:45:17 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_d(va_list params)
{
	int		value;
	char	*tmp;
	int		ret;

	value = va_arg(params, int);
	ft_putnbr_fd(value, 1);
	tmp = ft_itoa(value);
	ret = ft_strlen(tmp);
	free(tmp);
	return (ret);
}
