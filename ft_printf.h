/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 07:58:33 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/12/09 12:52:43 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(long n);
int	ft_hex_lower(unsigned long n);
int	ft_hex_upper(unsigned int n);
int	ft_unsigned_int(unsigned int n);
int	ft_strchr(const char *s, int c);

#endif
