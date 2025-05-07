/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:56:25 by joaomaia          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/05/06 06:17:38 by jomaia           ###   ########.fr       */
=======
/*   Updated: 2025/05/06 06:00:42 by jomaia           ###   ########.fr       */
>>>>>>> 5d5c59b (printf finished and tested)
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_unsputnbr(unsigned long n);
int	ft_puthex(unsigned int n, unsigned char c);
int	ft_printf(const char *format, ...);
int	ft_validcheck(size_t n);

#endif
