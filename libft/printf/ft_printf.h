/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:19:59 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:19:59 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include "../libft/libft.h" 

int		ft_printf(const char *format, ...);
int		ft_filter_format(char c, va_list ap);
int		ft_hexlen(unsigned long n);
int		ft_putchar(char c);
int		ft_puthexa(unsigned long n, char *base);
int		ft_putnbr(int n);
int		ft_putstr(char *str);
//int		ft_strlen(char *str);
int		ft_putptr(void *ptr);
int		ft_counter(long n);
int		ft_put_unsigned(unsigned int n);

#endif