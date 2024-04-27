/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:17:46 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:17:46 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (s);
}

/*int main()
{
    char s[20];
    size_t n = 4;
    
    ft_memset(s, 'a', n);
    puts(s);
    
    memset(s, 'B', n);
    puts(s);
}*/
