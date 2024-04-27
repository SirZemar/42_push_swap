/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 00:16:50 by jose-ero          #+#    #+#             */
/*   Updated: 2024/02/17 00:19:58 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	print_stack_tests(t_stack *stack);

void	print_tests(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	bigger;

	ft_printf("--------------------------------------\n");
	i = 0;
	ft_printf("Stack A		Stack B\n");
	if (stack_a->size >= stack_b->size)
		bigger = stack_a->size;
	else
		bigger = stack_b->size;
	while (i < bigger)
	{
		if (stack_a->top && i < stack_a->size)
			ft_printf("%i		", stack_a->top->value);
		else
			ft_printf("-		");
		if (stack_b->top && i < stack_b->size)
			ft_printf("%i\n", stack_b->top->value);
		else
			ft_printf("-\n");
		if (i < stack_a->size)
			stack_a->top = stack_a->top->next;
		if (i < stack_b->size)
			stack_b->top = stack_b->top->next;
		i++;
	}

	if (stack_a->size > 0 && stack_b->size > 0)
	{
		if (stack_a)
			print_stack_tests(stack_a);
		if (stack_b)
			print_stack_tests(stack_b);
	}
	ft_printf("========================================================================\n");
}
static void	print_stack_tests(t_stack *stack)
{
	int	i;

	i = 0;
	ft_printf("--------------------------------------\n");

	ft_printf("Stack %c\n", stack->name - 32);
	ft_printf("size: %i | ", stack->size);
	if (stack->top)
		ft_printf("top: %i | ", stack->top->value);
	if (stack->maximum_node)
		ft_printf("biggest: %i | ", stack->maximum_node->value);
	if (stack->minimum_node)
		ft_printf("smallest: %i | ", stack->minimum_node->value);
	if (stack->cheapest_node)
		ft_printf("cheapest_node: %i | ", stack->cheapest_node->value);
	ft_printf("\n");

	while (i < stack->size)
	{
		ft_printf("Stack_%c => ", stack->name);
		if (stack->top)
			ft_printf("Value: %i Position: %i ", stack->top->value, stack->top->position);
		if (stack->top && stack->top->target)
				ft_printf("Target value: %i Target position: %i ", stack->top->target->value, stack->top->target->position);
		if (stack->top)	
			ft_printf("Price: %i ", stack->top->price);
		ft_printf("\n");
		stack->top = stack->top->next;
		i++;
	}
}