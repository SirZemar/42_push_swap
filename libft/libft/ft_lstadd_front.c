/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:14:46 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:14:47 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

/* void freeList(t_list *head)
{
	t_list  *tmp;
	while (head)
	{
		tmp = head;
		head = head->next;
		tmp->content = NULL;
		free(tmp);
    }
}

int main()
{
	t_list *first;
	t_list *second;
	t_list *third;
	
	int a = 4;
	int b = 5;
	int c = 6;

	first = ft_lstnew((void *)&a);
	second = ft_lstnew((void *)&b);
	third = ft_lstnew((void *)&c);
	
	first->next = second;
	ft_lstadd_front(&first, third);
	
	while (third)
	{
		printf("%d", *(int *)third->content);
		third = third->next;
	}
	freeList(third);
} */