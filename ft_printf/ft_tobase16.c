/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tobase16.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lac <aait-lac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 17:21:30 by aait-lac          #+#    #+#             */
/*   Updated: 2026/11/24 17:21:32 by aait-lac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_tobase16(unsigned long n, char c)
{
	char *baselower;
	char *baseupper;

	baselower = "0123456789abcdef";
	baseupper = "0123456789ABCDEF";
	if (n == 0)
	{
		ft_putchar('0');
		return (0); 
	}
	if ((n / 16) > 0)
		ft_tobase16(n / 16, c);
	if (c == 'x' || c == 'p')
		return (ft_putchar(baselower[n % 16]));
	if (c == 'X')
		return (ft_putchar(baseupper[n % 16]));
	return (1);
}