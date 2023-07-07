/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:30:23 by joramire          #+#    #+#             */
/*   Updated: 2023/07/07 14:15:18 by joramire         ###   ########.fr       */
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
	ft_three_sort(stack_a);
	ft_print_stack(stack_a);
	ft_printf("distinct: %i \n", ft_distinct(stack_a));
	ft_printf("isrange: %i \n", ft_issort(stack_a));
	return (0);
}
