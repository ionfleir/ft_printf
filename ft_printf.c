/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:52:22 by aburga-g          #+#    #+#             */
/*   Updated: 2024/06/27 19:24:51 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formato(va_list pa, char sign)
{
	if (sign == 'c')
		return (ft_putchar(va_arg(pa, int)));
	if (sign == 's')
		return (ft_putstr(va_arg(pa, char *)));
	if (sign == 'i' || sign == 'd')
		return (ft_putnbr(va_arg(pa, int)));
	if (sign == 'x')
		return (ft_puthex(va_arg(pa, unsigned long long), sign));
	if (sign == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *txt, ...)
{
	va_list	pa;
	int		cont;
	int		i;

	cont = 0;
	i = 0;
	va_start (pa, txt);
	while (txt[i] != '\0')
	{
		if (txt[i] == '%')
			cont += ft_formato(pa, txt[++i]);
		else
			cont += ft_putchar(txt[i]);
		i++;
	}
	va_end(pa);
	return (cont);
}
