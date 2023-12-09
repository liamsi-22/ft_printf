/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:05:21 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/12/09 12:48:35 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	int	count;

	if (n < 0)
	{
		count = ft_putchar('-');
		return (1 + ft_putnbr(-n));
	}
	else if (n < 10)
	{
		count = ft_putchar((n % 10) + '0');
		return (count);
	}
	else
	{
		count = ft_putnbr(n / 10);
		return (count + ft_putnbr(n % 10));
	}
}
