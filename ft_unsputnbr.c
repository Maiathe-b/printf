/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:06:10 by jomaia            #+#    #+#             */
/*   Updated: 2025/05/03 12:09:40 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_unsputnbr(unsigned long n)
{
	int	i;

	i = 0;
	if (n >= 10)
		{
			i += ft_putnbr_fd(n / 10);
			i += ft_putnbr_fd(n % 10);
		}
		else
			i += ft_putchar_fd(n + '0');
	return (i);
}
