/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lac <aait-lac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 12:17:10 by aait-lac          #+#    #+#             */
/*   Updated: 2026/11/21 12:17:16 by aait-lac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stddef.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *, ...);
int    ft_format(char s, va_list arg);
int 	ft_putchar(char c);
int	    ft_putnbr(int n);
size_t	    ft_putstr(char *s);
int	    ft_u_putnbr(unsigned int n);
int     ft_tobase16(unsigned long n, char c);
int     ft_topointer(unsigned long n, char c);

#endif
