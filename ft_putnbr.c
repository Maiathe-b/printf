/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 11:48:55 by jomaia            #+#    #+#             */
/*   Updated: 2025/05/03 12:07:27 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(long n)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-');
		ft_putchar_fd('2');
		ft_putnbr_fd(147483648);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-');
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10);
			ft_putnbr_fd(n % 10);
		}
		else
			ft_putchar_fd(n + '0');
	}
	return (1);
}
