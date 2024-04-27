# push_swap

## Index

- [Description](#description)
- [Workflow ](#workflow)
- [Algorithm - Turk algorithm](#algorithm---turk-algorithm)
- [File structure](#file-structure)

## Description

Sort an array of numbers using the fewest possible moves among the allowed operations to achieve the sorted order.

## Workflow 

1. Verify inputs.
1. Initiate both stack_a and stack_b.
1. Add all arguments as new nodes to the stack_a in the same order the program got.
1. Check if nodes are already sorted by ascending order. If yes, free the memory for the stacks and complete program.
1. If is not sorted, then execute the push swap algorithm.
1. Starts by doing maximum two pb operations, depends if stack_a stays bigger than 2 nodes.
1. Find the maximum and minimum numbers and define them in stack_b.
1. Loop stack_b and update nodes:
	1. position.
1. Loop stack_a and update nodes:
	1. position, target, price.
1. Set the node with the lowest price as the cheapest_node to stack_a.
1. Now we do the move operations based on the cheapest match, in other words, the least amount of necessary moves to node from stack_a to matching node in stack_b.
1. When stack_a has only 3 nodes, stack_b is sorted but we need to rotate it until the maximum node is on top.
1. Sort the 3 nodes in stack_a and rotate the the minimum is on top.
1. Finally push all nodes from stack_b to stack_a. When stack_b top node is smaller than the stack_a top prev node reverse rotate until it finds a bigger value. If not, it doesn't reverse rotate more than 3 times.
1. Free memory of stacks.

## Algorithm - Turk algorithm

It sorts a stack by first sorting by descending order in a second stack and then push back to the first stack in ascending order. It is done by the rule of finding the cheapest move to top both matching numbers of both stacks. 

https://medium.com/@ayogun/push-swap-c1f5d2d41e97

## File structure
```c
+--	_operations
| +-- push.c
|   +-- static void	push(t_stack *src_stack, t_stack *dest_stack)
|   +-- static void	pa(t_stack *stack_b, t_stack *stack_a)
|   +-- static void	pb(t_stack *stack_a, t_stack *stack_b)
|   +--  void		px(t_stack *stack_a, t_stack *stack_b)
| +-- rotate.c
|   +-- static void	rotate(t_stack *stack)
|   +-- static void	ra(t_stack *stack_a)
|   +-- static void	rb(t_stack *stack_b)
|   +-- void		rx(t_stack *stack)
|   +-- void		rr(t_stack *stack_a, t_stack *stack_b)
| +-- reverse_rotate.c
|   +-- static void	reverse_rotate(t_stack *stack)
|   +-- static void	rra(t_stack *stack_a)
|   +-- static void	rrb(t_stack *stack_b)
|   +-- void		rrx(t_stack *stack_b)
|   +-- void		rrr(t_stack *stack_a, t_stack *stack_b)
| +-- swap.c
|   +-- static void	swap(t_stack *stack)
|   +-- static void	sa(t_stack *stack_a)
|   +-- static void	sb(t_stack *stack_b)
|   +-- void		sx(t_stack *stack_b)
|   +-- void		ss(t_stack *stack_a, t_stack *stack_b)
| +-- main.c
|   +-- int	main(int argc, char **argv)
|+-- move.c
| +-- void			move_to_top_matching_nodes(t_stack *stack_a, t_stack *stack_b, int move)
| +-- static void	move_seperate(t_stack *stack_a, t_stack *stack_b)
| +-- static void	move_together_up(t_stack *stack_a, t_stack *stack_b)
| +-- static void	move_together_down(t_stack *stack_a, t_stack *stack_b)
+-- node_init.c
| +--void	node_init(t_node *node, int value)
+--  node_service.c
| +-- t_node	*new_node(int value)
+-- node_setters.c
| +-- void	set_position(t_node *node, int position)
| +-- void	set_min_max(t_stack *stack)
| +-- void	set_target(t_node *node, t_stack *stack)
| +-- void	set_price(t_stack *stack_a, t_stack *stack_b)
|+-- price_utils.c
| +-- int	get_price_move_seperate(t_node *node, int size_a, int size_b)
| +-- int	get_price_move_together_up(t_node *node)
| +-- int	get_price_move_together_down(t_node *node, int size_a, int size_b)
+-- push_swap.c
| +-- void			push_swap(t_stack *stack_a, t_stack *stack_b)
| +-- static void	push_swap_forward(t_stack *stack_a, t_stack *stack_b);
| +-- static void	push_swap_back(t_stack *stack_a, t_stack *stack_b);
+-- stack_init.c
| +-- void	stack_init(t_stack *stack, char stack_name)
+-- stack_service.c
| +-- void	update_nodes_and_stacks(t_stack *stack_a, t_stack *stack_b)
| +-- int	add_node(t_stack *stack, t_node *node)
| +-- int	pop_node(t_stack *stack)
| +-- void	free_stack(t_stack *stack)
+-- stack_setters.c
| +-- void	set_cheapest(t_stack *stack)
| +-- void	set_smallest(t_stack *stack)
| +-- void	set_biggest(t_stack *stack)
+-- stack_utils.c
| +-- int	is_sorted(t_stack stack)
| +-- void	move_maximum_node_to_top(t_stack *stack)
| +-- void	move_minimum_node_to_top(t_stack *stack)
| +-- void	sort_3(t_stack *stack)
+-- terminate.c
| +-- void	error(int status)
| +-- void	free_stacks(t_stack *stack_a, t_stack *stack_b, int status)
+-- args_check.c
| +-- int			get_valid_args(int argc, char **argv)
| +-- static int	is_number(char *str)
| +-- static int	is_repeated(int argc, char **args)
```