/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:29:45 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/23 17:27:09 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{	
	t_stack	stack_a;
	t_stack	stack_b;
	int		i;

	i = 1;
	if (argc < 2)
		return (0);
	if (!is_input_valid(argc, argv))
		error(0);
	stack_init(&stack_a, 'a');
	stack_init(&stack_b, 'b');
	while (--argc >= i)
		add_node(&stack_a, new_node(ft_atoi(argv[argc])));
	if (is_sorted(stack_a) == 1)
		free_stacks(&stack_a, &stack_b, 1);
	push_swap(&stack_a, &stack_b);
	print_tests(&stack_a, &stack_b);
	free_stacks(&stack_a, &stack_b, 1);
}
