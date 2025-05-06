/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:15:59 by jomaia            #+#    #+#             */
/*   Updated: 2025/05/03 12:25:43 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_puthex(unsigned int n, unsigned char c)
{
	const char	*hexup = "0123456789ABCDEF";
	const char	*hexlow = "0123456789abcdef";
	int			i;

	i = 0;
	if(n > 15)
		i += ft_puthex(n / 16, c);
	if(c == 'X')
		i += ft_putchar(hexup[n % 16]);
	else if(c == 'x')
		i += ft_putchar(hexlow[n % 16]);
	return(i);
}


