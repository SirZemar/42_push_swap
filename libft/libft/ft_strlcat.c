/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:18:38 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:18:38 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size < len_dst + 1)
		return (len_src + size);
	if (size > len_dst + 1)
	{
		while (src[i] && len_dst + 1 + i < size)
		{
			dst[len_dst + i] = src[i];
			i++;
		}
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

/* int main()
{
    char dst[] = "rrrrrrrrrrrrrrr";
    char src[] = "lorem ipsum dolor sit amet";
    int size;

    size = 18;

    puts(dst);
    printf("%ld\n", ft_strlcat(dst, src, size));
    puts(dst);
} */