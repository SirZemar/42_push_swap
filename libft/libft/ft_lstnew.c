/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:15:34 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:15:34 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*int main()
{
	t_list *node;
	int a = 42;

	node = ft_lstnew(&a);
	while(node)
	{
		printf("%d\n", *(int *)node->content);
		node = node->next;
	}
	free(node);
}*/
