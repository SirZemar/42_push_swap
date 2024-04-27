/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:51:39 by lpicoli-          #+#    #+#             */
/*   Updated: 2024/02/17 20:42:23 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	is_number(char *str);
static int	verify_doubles(int argc, char **argv);
static long	ft_atol(const char *str);

/**
 * @brief Checks if all arguments passed to the program 
 * are all just strictly unique numbers.
 * @return Return 0 if no arguments were given. 
 * Return 1 if all arguments are valid.
*/
int	is_input_valid(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (is_number(argv[i]) == 0)
			return (0);
		else if (ft_atol(argv[i]) > INT_MAX || ft_atol(argv[i]) < INT_MIN)
			return (0);
		i++;
	}
	if (verify_doubles(argc, argv) == -1)
		return (0);
	return (1);
}

/**
 * @brief Check if string is representing a number 
 * @return Return 1 if true and 0 if false.
 */
static int	is_number(char *str)

{
	int	i;

	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

/**
 * @brief Check if arguments have repeated numbers.
 * @return Return 1 if true and 0 if false.
 */
static int	verify_doubles(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (atol(argv[i]) == atol(argv[j]))
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

static long	ft_atol(const char *str)
{
	long	num;
	int		is_negative;
	int		i;

	num = 0;
	is_negative = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		is_negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * is_negative);
}