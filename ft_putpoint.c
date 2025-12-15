/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:37:28 by soamraou          #+#    #+#             */
/*   Updated: 2025/12/15 12:18:13 by soamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

static int	ft_putpoint_hex(uintptr_t n, int fd, char b)
{
	char	c;
	char	*base;
	int		cnt;

	cnt = 0;
	if (b == 'x')
		base = "0123456789abcdef";
	if (b == 'X')
		base = "0123456789ABCDEF";
	if (fd < 0)
		return (0);
	if (n >= 16)
		cnt += ft_putpoint_hex(n / 16, fd, b);
	c = base[n % 16];
	write (fd, &c, 1);
	cnt++;
	return (cnt);
}

int	ft_putpoint(void *p)
{
	int			cnt;
	uintptr_t	n;

	cnt = 0;
	if (p == NULL)
	{
		cnt += ft_putstr_fd("(nil)", 1);
		return (cnt);
	}
	n = (uintptr_t)p;
	write (1, "0x", 2);
	cnt += 2;
	cnt += ft_putpoint_hex(n, 1, 'x');
	return (cnt);
}
