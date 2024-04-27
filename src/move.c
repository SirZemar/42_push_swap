/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:00:35 by jose-ero          #+#    #+#             */
/*   Updated: 2024/02/16 23:50:54 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	move_seperate(t_stack *stack_a, t_stack *stack_b);
static void	move_together_up(t_stack *stack_a, t_stack *stack_b);
static void	move_together_down(t_stack *stack_a, t_stack *stack_b);

/**
 * @brief Move matching nodes to the top of the stacks with the
 * cheapest configuration
 */
void	move_to_top_matching_nodes(t_stack *stack_a, t_stack *stack_b, int move)
{
	if (move == 0)
		move_seperate(stack_a, stack_b);
	else if (move == 1)
		move_together_up(stack_a, stack_b);
	else if (move == 2)
		move_together_down(stack_a, stack_b);
}

/**
 * @brief Matching nodes move in different directions of the stacks
 */
static void	move_seperate(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = 0;
	if (stack_a->cheapest_node->position <= (stack_a->size / 2))
		while (i++ < stack_a->cheapest_node->position)
			rx(stack_a);
	else
		while (i++ < (stack_a->size - stack_a->cheapest_node->position))
			rrx(stack_a);
	i = 0;
	if (stack_a->cheapest_node->target->position <= (stack_b->size / 2))
		while (i++ < stack_a->cheapest_node->target->position)
			rx(stack_b);
	else
		while (i++ < (stack_b->size - stack_a->cheapest_node->target->position))
			rrx(stack_b);
}

/**
 * @brief Matching nodes move together to the top of the stacks  
 */
static void	move_together_up(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	stack_a_position;
	int	stack_b_position;

	i = 0;
	stack_a_position = stack_a->cheapest_node->position;
	stack_b_position = stack_a->cheapest_node->target->position;
	if (stack_a_position <= stack_b_position)
	{
		while (i++ < stack_a_position)
			rr(stack_a, stack_b);
		i = 0;
		while (i++ < stack_b_position - stack_a_position)
			rx(stack_b);
	}
	else
	{
		while (i++ < stack_b_position)
			rr(stack_a, stack_b);
		i = 0;
		while (i++ < stack_a_position - stack_b_position)
			rx(stack_a);
	}
}

/**
 * @brief Matching nodes move together to the bottom of the stacks  
 */
static void	move_together_down(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	stack_a_position;
	int	stack_b_position;

	i = 0;
	stack_a_position = stack_a->size - stack_a->cheapest_node->position;
	stack_b_position = stack_b->size - stack_a->cheapest_node->target->position;
	if (stack_a_position <= stack_b_position)
	{
		while (i++ < stack_a_position)
			rrr(stack_a, stack_b);
		i = 0;
		while (i++ < stack_b_position - stack_a_position)
			rrx(stack_b);
	}
	else
	{
		while (i++ < stack_b_position)
			rrr(stack_a, stack_b);
		i = 0;
		while (i++ < stack_a_position - stack_b_position)
			rrx(stack_a);
	}
}
