/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:13:25 by sade-ara          #+#    #+#             */
/*   Updated: 2025/05/30 20:23:53 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_formats(char format)
{
	
	if (format == 'c')
		return(ft_putchar(va_arg(ap, int)));
	else if (format == 's')
		return(ft_putstr(va_arg(ap, char *)));
	else if (format == 'p')
		return(ft_putpointer(va_arg(ap, void *)));
	else if (format == 'd' || format == 'i')
		return(ft_putnbr(va_arg(ap, int)));
	else if (format == 'u')
		return(ft_putuint(va_arg(ap, unsigned int)));
	else if (format == 'x' || format == 'X')
		return(ft_puthex(va_arg(ap, unsigned int), format));
	else if (format == '%')
		return(ft_putchar('%'));
	return (0);
}
int	ft_printf(const char *format, ...)
{
	va_list ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while(!*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_formats(*format);
		}
		else
			count += ft_putchar(*format);
		format++;
	}
}	