/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:48:08 by jose-ero          #+#    #+#             */
/*   Updated: 2024/02/16 18:32:12 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	rotate(t_stack *stack)
{
	if (!stack || stack->size < 2)
		return ;
	stack->top = stack->top->next;
}

/**
 * @brief Rotate a: Shift up all elements of stack "a" by 1. 
 * The first element becomes the last one.
*/
static void	ra(t_stack *stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

/**
 * @brief Rotate b: Shift up all elements of stack "b" by 1. 
 * The first element becomes the last one.
*/
static void	rb(t_stack *stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

/**
 * @brief Rotate a & b: Shift up all elements of stack "a" & "b" by 1. 
 * The first element becomes the last one.
*/
void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}

void	rx(t_stack *stack)
{
	if (stack->name == 'a')
		ra(stack);
	if (stack->name == 'b')
		rb(stack);
}
