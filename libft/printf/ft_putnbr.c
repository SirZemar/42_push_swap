/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:20:14 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:20:14 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	signal;

	signal = 0;
	if (n == INT_MIN)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
		signal = 1;
	}
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (ft_counter(n) + signal);
}
