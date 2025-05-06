/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:29:02 by jomaia            #+#    #+#             */
/*   Updated: 2025/05/06 05:47:11 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printvar(char const c, va_list ap)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(ap, int));
	else if(c == 's')
		i += ft_putstr(va_arg(ap, char *));
	else if(c == 'p')
		i += ft_validcheck(va_arg(ap, size_t));
	else if(c == 'd' || c == 'i')
		i += ft_putnbr(va_arg(ap, int));
	else if(c == 'u')
		i += ft_unsputnbr(va_arg(ap, unsigned int));
	else if(c == 'x' || c == 'X')
		i += ft_puthex(va_arg(ap, unsigned int), c);
	else if(c == '%')
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	va_start(arg, format);
	if(!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while(format[i])
	{
		if (format[i] == '%')
		{
			res += ft_printvar(format[i + 1], arg);
			i++;
		}
		else
			res += ft_putchar(format[i]);
		i++;
	}
	va_end (arg);
	return (res);
}
