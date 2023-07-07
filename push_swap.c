/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:30:23 by joramire          #+#    #+#             */
/*   Updated: 2023/07/07 19:59:37 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library/library.h"
#include "srcs/parcing/ft_parcing.h"
#include "srcs/stacks/ft_stacks.h"
#include "srcs/movements/ft_movements.h"
#include "srcs/algorithm/ft_algorithm.h"

int	main(int argc, char **argv)
{
	char			**list;
	t_stack			*stack_a;
	t_stack			*stack_b;

	list = ft_format_input(argc, argv);
	stack_a = ft_fill_stack(list);
	stack_b = ft_empty_stack();
	if (stack_a == NULL || stack_b == NULL)
		return (1);
	ft_print_stack(stack_a);
	if (ft_check_algorithm(stack_a) == 1)
	{
		ft_printf("Error: Almost two numbers equal\n");
		return (1);
	}
	else if (ft_check_algorithm(stack_a) == 2)
	{
		ft_printf("Finish: Stack is already ordered\n");
		return (0);
	}
	else
		ft_algorithm(stack_a, stack_b);
	ft_print_stack(stack_a);
	ft_print_stack(stack_b);
	return (0);
}
