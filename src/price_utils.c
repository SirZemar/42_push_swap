/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   price_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:57:38 by jose-ero          #+#    #+#             */
/*   Updated: 2024/02/16 23:57:27 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * @brief Get the price of moving nodes seperatly
 * @return price value 
 */
int	get_price_move_seperate(t_node *node, int size_a, int size_b)
{
	int	price;

	price = 0;
	if (node->position <= (size_a / 2))
		price += node->position;
	else
		price += size_a - node->position;
	if (node->target->position <= (size_b / 2))
		price += node->target->position;
	else
		price += size_b - node->target->position;
	return (price);
}

/**
 * @brief Get the price of moving nodes together in top direction
 * @return price value 
 */
int	get_price_move_together_up(t_node *node)
{
	int		price;

	if (node->position <= node->target->position)
		price = node->target->position;
	else
		price = node->position;
	return (price);
}

/**
 * @brief Get the price of moving nodes together in bottom direction
 * @return price value 
 */
int	get_price_move_together_down(t_node *node, int size_a, int size_b)
{
	int		price;

	if ((size_a - node->position) <= (size_b - node->target->position))
		price = size_b - node->target->position;
	else
		price = size_a - node->position;
	return (price);
}
