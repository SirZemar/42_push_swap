/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:01:08 by jose-ero          #+#    #+#             */
/*   Updated: 2024/02/16 23:53:33 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * @brief Initialize node
 * 
 * @brief
 * - @c value: value parameter.
 * @brief
 * - @c position: 0.
 * @brief
 * - @c price: INT_MAX.
 * @brief
 * - @c move: 0.
 * @brief
 * - @c target: NULL.
 * @brief
 * - @c next: NULL.
 * @brief
 * - @c prev: NULL.
 */
void	node_init(t_node *node, int value)
{
	node->value = value;
	node->position = 0;
	node->price = INT_MAX;
	node->move = 0;
	node->target = NULL;
	node->next = NULL;
	node->prev = NULL;
}
