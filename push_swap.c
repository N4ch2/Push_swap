/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacho <nacho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:30:23 by joramire          #+#    #+#             */
/*   Updated: 2023/03/06 21:46:56 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library/library.h"
#include "srcs/parcing/ft_parcing.h"
#include "srcs/stacks/ft_stacks.h"
#include "srcs/movements/ft_movements.h"

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
	ft_print_stack(stack_b);
	ft_push(stack_a, stack_b);
	ft_push(stack_a, stack_b);
	ft_push(stack_a, stack_b);
	ft_swap(stack_b);
	ft_print_stack(stack_a);
	ft_print_stack(stack_b);
	return (0);
}
