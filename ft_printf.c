/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:05:11 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/12/10 17:57:52 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count = ft_putchar(va_arg(ap, int));
	else if (specifier == 's')
		count = ft_putstr(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count = ft_putnbr(va_arg(ap, int));
	else if (specifier == 'u')
		count = ft_unsigned_int(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		count = ft_hex_lower(va_arg(ap, unsigned int));
	else if (specifier == 'X')
		count = ft_hex_upper(va_arg(ap, unsigned int));
	else if (specifier == 'p')
	{
		count = ft_putstr("0x");
		count += ft_hex_lower((unsigned long)va_arg(ap, void *));
	}
	else
		count = ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		counter;
	int		i;

	i = 0;
	va_start(ap, format);
	counter = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (ft_strchr("cspdiuxX%", format[i + 1]))
				counter += print_format(format[++i], ap);
		}
		else
			counter += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (counter);
}
