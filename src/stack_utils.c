/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:57:19 by jose-ero          #+#    #+#             */
/*   Updated: 2024/02/17 00:12:45 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * @brief Check if stack is sorted by ascension order.
 * @return Returns 0 if true and 1 if not.
*/
int	is_sorted(t_stack stack)
{
	t_node	*head;
	int		i;

	head = stack.top;
	i = 0;
	while (i < stack.size && stack.top->next && stack.top->next != head)
	{
		if (stack.top->next->value < stack.top->value)
			return (0);
		stack.top = stack.top->next;
		i++;
	}
	return (1);
}

/**
 * @brief Move the maximum value node to the top of the stack. 
 */
void	move_maximum_node_to_top(t_stack *stack)
{
	if (!stack || !stack->top)
		return ;
	if (stack->maximum_node->position <= (stack->size / 2))
	{
		while (stack->top->value != stack->maximum_node->value)
			rx(stack);
	}
	else
		while (stack->top->value != stack->maximum_node->value)
			rrx(stack);
}

/**
 * @brief Move the minimum value node to the top of the stack. 
 */
void	move_minimum_node_to_top(t_stack *stack)
{
	if (!stack || !stack->top)
		return ;
	if (stack->minimum_node->position <= (stack->size / 2))
	{
		while (stack->top->value != stack->minimum_node->value)
			rx(stack);
	}
	else
		while (stack->top->value != stack->minimum_node->value)
			rrx(stack);
}

/**
 * @brief Sort in ascending order with 3 nodes. 
 */
int	sort3(t_stack *stack_a)
{
	if (is_sorted(*stack_a) == 1)
		return (1);
	if (stack_a->top->value == stack_a->maximum_node->value)
		rx(stack_a);
	else if (stack_a->top->next->value == stack_a->maximum_node->value)
		rrx(stack_a);
	if (stack_a->top->value > stack_a->top->next->value)
		sx(stack_a);
	return (1);
}
