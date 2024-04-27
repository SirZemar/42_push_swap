/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:19:10 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:19:16 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result_str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	result_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!result_str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			result_str[j] = s[i];
			j++;
		}
		i++;
	}
	result_str[j] = '\0';
	return (result_str);
}

/* int main()
{
    char *s = "lorem ipsum dolor sit amet";
    unsigned int start = 0;
    size_t len = 5;

    char *substr = (ft_substr("0123456789", 9, 10));
    printf("%s", substr);
} */