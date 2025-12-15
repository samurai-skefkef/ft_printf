/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 22:49:57 by soamraou          #+#    #+#             */
/*   Updated: 2025/12/15 12:28:20 by soamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_convert(va_list arg, const char c)
{
	int	cnt;

	cnt = 0;
	if (c == 'c')
		cnt += ft_putchar_fd(va_arg(arg, int), 1);
	if (c == 's')
		cnt += ft_putstr_fd(va_arg(arg, char *), 1);
	if (c == 'p')
		cnt += ft_putpoint(va_arg(arg, void *));
	if (c == 'd' || c == 'i')
		cnt += ft_putnbr_fd(va_arg(arg, int), 1);
	if (c == 'u')
		cnt += ft_putunbr_fd(va_arg(arg, int), 1);
	if (c == 'x' || c == 'X')
		cnt += ft_putnbr_fd_hex(va_arg(arg, int), 1, c);
	if (c == '%')
	{
		write(1, &c, 1);
		cnt++;
	}
	return (cnt);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		cnt;

	if (s == NULL)
		return (-1);
	va_start(arg, s);
	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != '%')
		{
			write (1, &s[i++], 1);
			cnt++;
		}
		else
		{
			cnt += ft_convert(arg, s[++i]);
			i++;
		}
	}
	va_end(arg);
	return (cnt);
}
