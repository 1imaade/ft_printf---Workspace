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

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *, ...);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);

#endif
