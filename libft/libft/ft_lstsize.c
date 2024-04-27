/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:15:40 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:15:40 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int main()
{
	t_list *first;
	t_list *second;
	t_list *third;

	int a = 1;
	int b = 2; 
	int c = 3;

	first = ft_lstnew(&a);
	second = ft_lstnew(&b);
	third = ft_lstnew(&c);

	first->next = second;
	second->next = third;
	third->next = NULL;

	printf("number of nodes: %d\n", ft_lstsize(first));
}*/