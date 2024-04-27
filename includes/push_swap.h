/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <jose-ero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:24:34 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/27 18:53:24 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft/libft.h"
# include <stdbool.h>

/**
 * @brief   Structure representing a node in a doubly-linked list. 
 * This structure defines a node with the following properties:
 *
 * @brief
 *   - @c position: The index of the node in the stack.
 * @brief
 *   - @c value: A integer value stored in the node.
 * @brief
 *   - @c price: Integer of the necessary moves to top both matching numbers.
 * @brief
 *   - @c move: Int that defines node move strategy.
 * 0: moves nodes seperatly. 1: moves nodes in up direction. 
 * 2: move nodes in down direction
 * @brief
 *   - @c target: Pointer to the node that corresponds to the 
 * corrected sorted position.
 * @brief
 *   - @c next: Pointer to the next node in the list.
 * @brief
 *   - @c prev: Pointer to the previous node in the list.
 */
typedef struct s_node
{
	int				position;
	int				value;
	int				price;
	int				move;
	struct s_node	*target;
	struct s_node	*next;
	struct s_node	*prev;
}				t_node;

/**
 * @brief Structure representing a stack. This structure defines a 
 * stack with the following properties:
 * 
 * @brief
 * - @c top: Pointer to the top node of the stack.
* @brief
 * - @c minimum_node: Pointer to the node with the minimum value.
 * @brief
 * - @c maximum_node: Pointer to the node with the maximum value.
 * @brief
 * - @c cheapeast_node: Pointer to the node with the cheapest value.
 * @brief
 * - @c size: Current size of the stack.
 * @brief
 * - @c name: A character representing the name of the stack.
 */
typedef struct s_stack
{
	t_node			*top;
	t_node			*minimum_node;
	t_node			*maximum_node;
	t_node			*cheapest_node;
	int				size;
	char			name;
}				t_stack;

// *** Operations ***

void	px(t_stack *src_stack, t_stack *dest_stack);
void	rrx(t_stack *stack);
void	rx(t_stack *stack);
void	sx(t_stack *stack);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);

// *** Move ***

void	move_to_top_matching_nodes(t_stack *stack_a,
			t_stack *stack_b, int move);

// *** Node init ***

void	node_init(t_node *node, int value);

// *** Node service ***

t_node	*new_node(int value);

// *** Node setters ***

void	set_target(t_node *node, t_stack *stack);
void	set_position(t_node *node, int position);
void	set_price(t_node *node, int size_a, int size_b);

// *** Price utils ***

int		get_price_move_seperate(t_node *node, int size_a, int size_b);
int		get_price_move_together_up(t_node *node);
int		get_price_move_together_down(t_node *node, int size_a, int size_b);

// *** Push swap ***

void	push_swap(t_stack *stack_a, t_stack *stack_b);

// *** Stack init ***

void	stack_init(t_stack *stack, char stack_name);

// *** Stack service ***

void	update_nodes_and_stacks(t_stack *stack_a, t_stack *stack_b);
int		add_node(t_stack *stack, t_node *node);
int		pop_node(t_stack *stack);
void	free_stack(t_stack *stack);

// *** Stack setters ***

void	set_cheapest(t_stack *stack);
void	set_min_max(t_stack *stack);

// *** Stack utils ***

int		is_sorted(t_stack stack);
void	move_maximum_node_to_top(t_stack *stack);
void	move_minimum_node_to_top(t_stack *stack);
int		sort3(t_stack *stack);

// *** Args check ***
char	**get_valid_args(int argc, char **argv);

void	error(int status);
void	free_stacks(t_stack *stack_a, t_stack *stack_b, int status);

#endif
