/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:45:43 by soamraou          #+#    #+#             */
/*   Updated: 2025/12/15 11:22:20 by soamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*def_base(char b)
{
	if (b == 'x')
		return ("0123456789abcdef");
	if (b == 'X')
		return ("0123456789ABCDEF");
	else
		return (0);
}

int	ft_putnbr_fd_hex(unsigned int n, int fd, char b)
{
	int		cnt;
	char	c;
	char	*base;

	cnt = 0;
	base = def_base(b);
	if (fd < 0)
		return (0);
	if (n >= 16)
		cnt += ft_putnbr_fd_hex(n / 16, 1, b);
	c = base[n % 16];
	write (fd, &c, 1);
	cnt++;
	return (cnt);
}
