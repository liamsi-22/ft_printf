/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:05:21 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/12/09 12:49:32 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_int(unsigned int n)
{
	int	count;

	if (n < 10)
		return (ft_putchar((n % 10) + '0'));
	else
	{
		count = ft_unsigned_int(n / 10);
		return (count + ft_unsigned_int(n % 10));
	}
}
