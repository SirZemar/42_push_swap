/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:15:03 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:15:04 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
}

/*void ft_freeNode(void *node)
{
    node = NULL;   
}

int main()
{
    int a = 1;
    int b = 2;
    
    t_list *first;
    t_list *second;

    first = ft_lstnew(&a);
    second = ft_lstnew(&b);
       
    first->next = second;
    second->next = NULL;

    while (first)
    {    
        printf("%d\n", *(int *)first->content);
        first = first->next;
    }
    
    ft_lstclear(&first, &ft_freeNode);
    
    if(first == NULL && second == NULL)
        printf("It's null");
    else
    {   
        printf("It's not null");
    }
}*/
