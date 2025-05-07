/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:06:10 by jomaia            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/05/06 05:47:54 by jomaia           ###   ########.fr       */
=======
/*   Updated: 2025/05/06 06:04:15 by jomaia           ###   ########.fr       */
>>>>>>> 5d5c59b (printf finished and tested)
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsputnbr(unsigned long n)
{
	int	i;

	i = 0;
	if (n >= 10)
		{
<<<<<<< HEAD
			i += ft_putnbr(n / 10);
			i += ft_putnbr(n % 10);
=======
			i += ft_unsputnbr(n / 10);
			i += ft_unsputnbr(n % 10);
>>>>>>> 5d5c59b (printf finished and tested)
		}
		else
			i += ft_putchar(n + '0');
	return (i);
}
