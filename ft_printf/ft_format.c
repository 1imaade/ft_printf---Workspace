/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lac <aait-lac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 13:44:59 by aait-lac          #+#    #+#             */
/*   Updated: 2026/11/24 13:45:01 by aait-lac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_format(char s, va_list arg)
{
	if (s == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (s == 'd' || s == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (s == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (s == 'u')
		return (ft_u_putnbr(va_arg(arg, unsigned int)));
	else if (s == 'x')
		return (ft_tobase16(va_arg(arg, unsigned int), 'x'));
	else if (s == 'X')
		return (ft_tobase16(va_arg(arg, unsigned int), 'X'));
	else if (s == 'p')
		return (ft_topointer(va_arg(arg, unsigned long), 'p'));
	else if (s == '%')
		return (ft_putchar(s));
	return (-1);
}