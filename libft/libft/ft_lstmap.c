/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:15:27 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:15:28 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*new;
	t_list	*lst2;

	if (!lst || !(*f) || !(*del))
		return (NULL);
	lst2 = ft_lstnew((*f)(lst->content));
	if (!lst2)
		return (NULL);
	aux = lst->next;
	while (aux)
	{
		new = ft_lstnew((*f)(aux->content));
		if (!new)
		{
			ft_lstclear(&lst2, (*del));
			return (NULL);
		}	
		ft_lstadd_back(&lst2, new);
		aux = aux->next;
	}
	return (lst2);
}

/* t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_node;
    t_list *node;
    
    node = NULL;
    while (lst)
    {
        new_node = ft_lstnew(f(lst->content));
        if(!new_node)#include "libft.h"ew_node);
        lst = lst->next;
    }
    new_node = NULL;
    return (node);
} */
