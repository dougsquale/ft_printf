/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:48:53 by dbelpaum          #+#    #+#             */
/*   Updated: 2021/11/27 15:29:23 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_address(unsigned long int addr)
{
	char	buffer[16];
	int		i;
	int		len;

	if (addr == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	i = 0;
	while (addr)
	{
		buffer[i] = "0123456789abcdef"[addr % 16];
		addr = addr / 16;
		i++;
	}
	write(1, "0x", 2);
	len = i;
	i--;
	while (i + 1)
		write(1, &buffer[i--], 1);
	return (len + 2);
}
