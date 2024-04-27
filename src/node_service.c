/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_service.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:55:36 by jose-ero          #+#    #+#             */
/*   Updated: 2024/02/16 23:54:21 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * @brief Allocate memory for t_node size and initiates node
 * @return Returns a node.
*/
t_node	*new_node(int value)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (node)
		node_init(node, value);
	return (node);
}
