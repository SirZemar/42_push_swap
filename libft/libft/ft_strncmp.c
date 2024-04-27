/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:18:55 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:18:56 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (*(ptr1 + i) || *(ptr2 + i)))
	{
		if (*(ptr1 + i) != *(ptr2 + i))
			return (*(ptr1 + i) - *(ptr2 + i));
		i++;
	}
	return (0);
}

/* int main()
{
	printf("FAKE: %d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("ORIGINAL: %d\n", strncmp("abcdefgh", "abcdwxyz", 4));
}
 */