/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:38:19 by aburga-g          #+#    #+#             */
/*   Updated: 2024/06/26 15:33:30 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int c)
{
	int	cont;

	cont = 0;
	if (c == -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	if (c < 0)
	{
		cont += ft_putchar('-');
		c = -c;
	}
	if (c >= 10)
		cont += ft_putnbr(c / 10);
	cont += ft_putchar((c % 10) + '0');
	return (cont);
}
