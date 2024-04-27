/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_service.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 15:41:54 by jose-ero          #+#    #+#             */
/*   Updated: 2024/02/17 00:06:35 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * @brief Set properties to the actual state of the nodes and stacks.  
 */
void	update_nodes_and_stacks(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	set_min_max(stack_a);
	set_min_max(stack_b);
	if (!stack_b || !stack_b->top)
		return ;
	i = 0;
	while (i < stack_b->size)
	{
		set_position(stack_b->top, i);
		stack_b->top = stack_b->top->next;
		i++;
	}
	if (!stack_a || !stack_a->top)
		return ;
	i = 0;
	while (i < stack_a->size)
	{
		set_position(stack_a->top, i);
		set_target(stack_a->top, stack_b);
		set_price(stack_a->top, stack_a->size, stack_b->size);
		stack_a->top = stack_a->top->next;
		i++;
	}
	set_cheapest(stack_a);
}

/**
 * @brief Free the top node from stack. Link new top node to last node.
 * @return Return 0 if stack or stack->top null.
*/
int	pop_node(t_stack *stack)
{
	t_node	*to_remove;

	if (!stack || !stack->top)
		return (0);
	to_remove = stack->top;
	if (stack->size == 1)
		stack->top = NULL;
	else
	{
		stack->top = stack->top->next;
		stack->top->prev = to_remove->prev;
		to_remove->prev->next = stack->top;
	}
	free(to_remove);
	stack->size--;
	return (1);
}

/**
 * @brief Add a node to target stack. Set node->prev to last node 
 * in the stack and node->next to previous top node of the stack and 
 * finally, new stack node is set to the new stack->top. If there was no top 
 * in the stack, then node both prev and next are refered to the node itself 
 * @return Return 0 if one of parameters stack and node is null. 
 * Return 1 if success.
*/
int	add_node(t_stack *stack, t_node *node)
{
	if (!node || !stack)
		return (0);
	stack->size++;
	if (!stack->top)
	{
		node->prev = node;
		node->next = node;
		stack->top = node;
		return (1);
	}
	node->next = stack->top;
	node->prev = stack->top->prev;
	stack->top->prev->next = node;
	stack->top->prev = node;
	stack->top = node;
	return (1);
}

/**
 * @brief Iterate and free every node from stack.
*/
void	free_stack(t_stack *stack)
{
	t_node	*tmp;

	if (!stack || !stack->top)
		return ;
	while (stack->size > 1)
	{
		tmp = stack->top->next;
		free(stack->top);
		stack->top = tmp;
		stack->size--;
	}
	free(stack->top);
	stack->top = NULL;
	stack->size = 0;
	stack->maximum_node = 0;
	stack->minimum_node = 0;
}
