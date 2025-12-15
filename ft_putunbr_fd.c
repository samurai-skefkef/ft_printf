/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:54:20 by soamraou          #+#    #+#             */
/*   Updated: 2025/12/08 18:26:38 by soamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_fd(unsigned int n, int fd)
{
	int		cnt;
	char	c;

	cnt = 0;
	if (fd < 0)
		return (0);
	if (n >= 10)
		cnt += ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + 48;
	write (fd, &c, 1);
	cnt++;
	return (cnt);
}
