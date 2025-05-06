/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:06:10 by jomaia            #+#    #+#             */
/*   Updated: 2025/05/06 05:47:54 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsputnbr(unsigned long n)
{
	int	i;

	i = 0;
	if (n >= 10)
		{
			i += ft_putnbr(n / 10);
			i += ft_putnbr(n % 10);
		}
		else
			i += ft_putchar(n + '0');
	return (i);
}
