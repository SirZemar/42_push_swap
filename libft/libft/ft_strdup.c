/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:18:22 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:18:23 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*ptr;

	size = ft_strlen(s) + 1;
	ptr = (char *)malloc(size * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, size);
	return (ptr);
}
