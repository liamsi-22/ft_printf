/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_upper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:37:44 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/12/09 12:44:37 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_upper(unsigned int n)
{
	int		count;
	char	*base;

	base = "0123456789ABCDEF";
	if (n >= 16)
	{
		count = ft_hex_upper(n / 16);
		return (count + ft_hex_upper(n % 16));
	}
	else
	{
		count = ft_putchar(base[n]);
		return (count);
	}
}
