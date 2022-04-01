/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:24:11 by dbelpaum          #+#    #+#             */
/*   Updated: 2021/08/05 11:24:11 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunsignednbr_fd(unsigned int n, int fd)
{
	char	t[12];
	int		i;

	if (n == 0)
		ft_putchar_fd('0', fd);
	i = 0;
	while (n)
	{
		t[i++] = ('0' + n % 10);
		n = n / 10;
	}
	while (i)
		ft_putchar_fd(t[--i], fd);
}
