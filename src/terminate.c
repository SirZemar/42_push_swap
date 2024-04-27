/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:45:31 by jose-ero          #+#    #+#             */
/*   Updated: 2024/02/17 21:47:23 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error(int status)
{
	ft_printf("Error\n");
	exit(status);
}

void	free_stacks(t_stack *stack_a, t_stack *stack_b, int status)
{
	free_stack(stack_a);
	free_stack(stack_b);
	exit(status);
}
