/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:44:49 by aburga-g          #+#    #+#             */
/*   Updated: 2024/06/24 13:44:49 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formato(va_list pa, char sign)
{
	if (sign == 'c')
		return (ft_putchar(va_arg(pa, int)));
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
	return(cont);
}