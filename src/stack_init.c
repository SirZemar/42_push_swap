/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:52:21 by jose-ero          #+#    #+#             */
/*   Updated: 2024/02/17 00:04:49 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * @brief Set properties of stack with initial values.
 * 
 * @brief
 * - @c top: NULL.
 * @brief
 * - @c minimum_node: NULL.
 * @brief
 * - @c maximum_node: NULL.
 * @brief
 * - @c cheapest_node: NULL.
 * @brief
 * - @c size: 0.
 * @brief
 * - @c name: stack name parameter.
*/
void	stack_init(t_stack *stack, char stack_name)
{
	stack->top = NULL;
	stack->minimum_node = NULL;
	stack->maximum_node = NULL;
	stack->cheapest_node = NULL;
	stack->size = 0;
	stack->name = stack_name;
}
