/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:19:03 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:19:03 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	while (--i >= 0)
	{
		s--;
		if (*s == (char)c)
			return ((char *)s);
	}
	return (0);
}

/*int main()
{
	printf("FAKE: %s\n", ft_strrchr("hello", 'l'));
	printf("ORIGINAL: %s\n", strrchr("hello", 'l'));
}*/
