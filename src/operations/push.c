/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:47:21 by jose-ero          #+#    #+#             */
/*   Updated: 2024/02/16 23:38:29 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	push(t_stack *src_stack, t_stack *dest_stack)
{
	int	data_to_push;

	if (!src_stack || !src_stack->top)
		return ;
	data_to_push = src_stack->top->value;
	add_node(dest_stack, new_node(data_to_push));
	pop_node(src_stack);
}

/**
 * @brief Take the first element at the top o stack b 
 * and put at the top of stack a
*/
static void	pa(t_stack *stack_b, t_stack *stack_a)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

/**
 * @brief Take the first element at the top o stack a 
 * and put at the top of stack b
*/
static void	pb(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}

void	px(t_stack *src_stack, t_stack *dest_stack)
{
	if (dest_stack->name == 'a')
		pa(src_stack, dest_stack);
	if (dest_stack->name == 'b')
		pb(src_stack, dest_stack);
}
