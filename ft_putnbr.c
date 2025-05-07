/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 11:48:55 by jomaia            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/05/06 06:18:59 by jomaia           ###   ########.fr       */
=======
/*   Updated: 2025/05/06 05:59:56 by jomaia           ###   ########.fr       */
>>>>>>> 5d5c59b (printf finished and tested)
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		i;
	long	num;

	i = 0;
	num = n;
	if (num < 0)
	{
		i += ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		i += ft_putnbr(num / 10);
		i += ft_putnbr(num % 10);
	}
	else
		i += ft_putchar(num + '0');
	return (i);
}
