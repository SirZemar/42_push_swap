/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:17:36 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:17:37 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while (i <= n - 1)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*int main()
{
	char dest[] = "1234";
	char src[] = "abcd";

	char dest1[] = "1234";
	char src1[] = "abcd";
	size_t n = 2;

	ft_memcpy(dest, src, n);
	memcpy(dest1, src1, n);

	puts(dest);
	puts(dest1);

	//printf("FAKE: %s", ft_memcpy(dest, src, n));
	//printf("ORIGINAL: %s\n", memcpy(dest1, src2, n));
}*/
