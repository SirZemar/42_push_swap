/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:13:41 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:13:46 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		((char *)s)[i] = '\0';
		i++;
		n--;
	}
}

/* 
int main()
{
    char s[] = "AAAAAAAAAAAAAA";
    char b[] = "AAAAAAAAAAAAAA";
    
    ft_bzero(s + 2, 4);
    puts(s);
    
    bzero(b + 2, 4);
    puts(b);
} */