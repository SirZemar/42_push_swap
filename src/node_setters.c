/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_setters.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:10:18 by jose-ero          #+#    #+#             */
/*   Updated: 2024/02/17 18:45:20 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * @brief Set node position in the stack.
 */
void	set_position(t_node *node, int position)
{
	if (!node)
		return ;
	node->position = position;
}

/**
 * @brief Set the target node to which a new node should 
 * be pushed in order to maintain descending order within the stack.
 */
void	set_target(t_node *node, t_stack *stack)
{
	int		i;
	long	distance;

	if (!node || !stack || !stack->top)
		return ;
	i = 0;
	if (node->value > stack->maximum_node->value
		|| node->value < stack->minimum_node->value)
		node->target = stack->maximum_node;
	else
	{
		distance = LONG_MAX;
		while (i++ < stack->size)
		{
			if ((node->value - stack->top->value) == 0)
				node->target = stack->top;
			else if (node->value > stack->top->value
				&& (node->value - stack->top->value) < distance)
			{
				distance = node->value - stack->top->value;
				node->target = stack->top;
			}
			stack->top = stack->top->next;
		}
	}
}

/**
 * @brief Set the price for the lowest possible movements each 
 * node has to do to move from stack_a to target in stack_b.
 */
void	set_price(t_node *node, int size_a, int size_b)
{
	int		price;
	int		price_move_seperate;
	int		price_price_move_together_up;
	int		price_move_together_down;

	price_move_seperate = get_price_move_seperate(node, size_a, size_b);
	price_price_move_together_up = get_price_move_together_up(node);
	price_move_together_down
		= get_price_move_together_down(node, size_a, size_b);
	price = price_move_seperate;
	node->move = 0;
	if (price_price_move_together_up < price)
	{
		price = price_price_move_together_up;
		node->move = 1;
	}
	if (price_move_together_down < price)
	{
		price = price_move_together_down;
		node->move = 2;
	}
	node->price = price;
}
