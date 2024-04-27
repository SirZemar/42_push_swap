/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:20:11 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:20:11 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char *base)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
	{
		if (n < 16)
			ft_putchar(base[n]);
		else
		{
			ft_puthexa(n / 16, base);
			ft_puthexa(n % 16, base);
		}
		return (ft_hexlen(n));
	}
}
