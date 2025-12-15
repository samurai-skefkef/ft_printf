/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:45:43 by soamraou          #+#    #+#             */
/*   Updated: 2025/12/08 18:11:04 by soamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	int		cnt;
	char	c;

	cnt = 0;
	if (fd < 0)
		return (0);
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
		cnt++;
	}
	if (n >= 10)
		cnt += ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + 48;
	write (fd, &c, 1);
	cnt++;
	return (cnt);
}
