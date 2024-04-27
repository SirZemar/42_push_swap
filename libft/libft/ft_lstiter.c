/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:15:15 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:15:16 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void ft_upperCase(char *c)
{
    int i;

    i = 0;
    while (c[i])
    {
        c[i] -= 32;
        i++;
    }
}

int main()
{
    char *x = "a";
    char *y = "b";

    t_list *first;
    t_list *second;
    t_list *tmp;

    first = ft_lstnew(&x);
    second = ft_lstnew(&y);

    first->next = second;
    second->next = NULL;
    tmp = first;
    
    while (tmp)
    {
        printf("%c\n", *(char *)tmp->content);
        tmp = tmp->next;           
    }

    ft_lstiter(first, ft_upperCase);

    while (first)
    {
        printf("%c\n", *(char *)first->content);
        first = first->next;           
    }
}*/