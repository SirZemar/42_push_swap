/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:18:46 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:18:48 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*int main()
{
	const char *s = "hello world";

	printf("FAKE: %lu\n", ft_strlen(s));
	printf("ORIGINAL: %lu\n", strlen(s));
}*/
