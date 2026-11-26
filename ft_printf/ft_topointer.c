/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_topointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lac <aait-lac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 00:03:10 by aait-lac          #+#    #+#             */
/*   Updated: 2026/11/26 00:03:12 by aait-lac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void ft_topointer(unsigned long n, char c)
{
	if ((unsigned long *)n == NULL)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	ft_tobase16(n, c);
}
