/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:17:59 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:17:59 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	nb;
	char		str;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	str = (nb % 10) + '0';
	write(fd, &str, 1);
}

/* int main()
{
    ft_putnbr_fd(12000, 1);
} */