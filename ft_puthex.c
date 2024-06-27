/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:15:37 by aburga-g          #+#    #+#             */
/*   Updated: 2024/06/27 19:23:05 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, char c)
{
	int		cont;
	char	*min;
	char	*may;

	cont = 0;
	min = "0123456789abcdef";
	may = "0123456789ABCDEF";
	if (n >= 16)
		cont += ft_puthex(n / 16, c);
	if (n == 'x')
		cont += ft_putchar(min[n % 16]);
	else if (n == 'X')
		cont += ft_putchar(may[n % 16]);
	return (cont);
}
