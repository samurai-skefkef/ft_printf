/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 22:47:42 by soamraou          #+#    #+#             */
/*   Updated: 2025/12/15 11:20:53 by soamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar_fd(char c, int fd);
int	ft_putunbr_fd(unsigned int n, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putnbr_fd_hex(unsigned int n, int fd, char b);
int	ft_putpoint(void *p);
int	ft_putstr_fd(char *s, int fd);

#endif
