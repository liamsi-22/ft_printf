/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:36:47 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/12/09 12:44:14 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_lower(unsigned long n)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	if (n < 16)
	{
		count = ft_putchar(base[n]);
		return (count);
	}
	else
	{
		count = ft_hex_lower(n / 16);
		return (count + ft_hex_lower(n % 16));
	}
}
