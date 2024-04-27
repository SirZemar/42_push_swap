/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:07:06 by jose-ero          #+#    #+#             */
/*   Updated: 2024/02/17 00:11:51 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	push_swap_forward(t_stack *stack_a, t_stack *stack_b);
static void	push_swap_back(t_stack *stack_a, t_stack *stack_b);

/**
 * @brief Sort values in ascending order with the least operation moves. 
 */
void	push_swap(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = 0;
	while (i++ < 2 && stack_a->size > 3)
		px(stack_a, stack_b);
	push_swap_forward(stack_a, stack_b);
	update_nodes_and_stacks(stack_a, stack_b);
	sort3(stack_a);
	update_nodes_and_stacks(stack_a, stack_b);
	move_maximum_node_to_top(stack_b);
	update_nodes_and_stacks(stack_a, stack_b);
	push_swap_back(stack_a, stack_b);
	update_nodes_and_stacks(stack_a, stack_b);
	move_minimum_node_to_top(stack_a);
	update_nodes_and_stacks(stack_a, stack_b);
}

/**
 * @brief Push nodes from stack_a to stack_b in a descending order with
 * the least possible operation moves.
 */
void	push_swap_forward(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->size > 3)
	{
		update_nodes_and_stacks(stack_a, stack_b);
		move_to_top_matching_nodes(stack_a, stack_b,
			stack_a->cheapest_node->move);
		px(stack_a, stack_b);
	}
}

/**
 * @brief Push nodes from stack_b to stack_a in a ascending order with
 * the least possible operation moves.
 */
void	push_swap_back(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = 0;
	while (stack_b->size > 0)
	{
		update_nodes_and_stacks(stack_a, stack_b);
		if (stack_b->top->value > stack_a->top->prev->value || i == 3)
			px(stack_b, stack_a);
		else if (i++ < 3)
			rrx(stack_a);
	}
}
