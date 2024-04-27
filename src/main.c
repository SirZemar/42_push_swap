/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <jose-ero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:29:45 by jose-ero          #+#    #+#             */
/*   Updated: 2024/04/27 18:52:33 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		number_count;
	char	**args;

	number_count = 0;
	if (argc < 2)
		return (0);
	args = get_valid_args(argc, argv);
	while (args[number_count])
		number_count++;
	stack_init(&stack_a, 'a');
	stack_init(&stack_b, 'b');
	while (--number_count >= 0)
		add_node(&stack_a, new_node(ft_atoi(args[number_count])));
	if (is_sorted(stack_a) == 1)
		free_stacks(&stack_a, &stack_b, 1);
	push_swap(&stack_a, &stack_b);
	free_stacks(&stack_a, &stack_b, 1);
	free(args);
}
