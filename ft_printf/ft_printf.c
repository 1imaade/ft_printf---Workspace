/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lac <aait-lac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 12:17:04 by aait-lac          #+#    #+#             */
/*   Updated: 2026/11/21 12:17:06 by aait-lac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"


int	ft_printf(const char *format, ...)
{
	va_list arg;
	int i;

	i = 0;
	va_start(arg, format);
	while (format[i]) {
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			ft_putchar('i');
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 'd')
		{
			ft_putnbr(20);
			i++;
		}
		else 
			ft_putchar(format[i]);
		i++;
	}
	va_end(arg);

	return (0);
}