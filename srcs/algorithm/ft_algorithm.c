/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:16:56 by joramire          #+#    #+#             */
/*   Updated: 2023/07/17 22:19:34 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithm.h"

int	ft_check_algorithm(t_stack *stack_a)
{
	if (ft_distinct(stack_a) == 0)
		return (1);
	if (ft_issort(stack_a) == 1)
		return (2);
	return (0);
}

void	ft_algorithm(t_stack *stack_a, t_stack *stack_b)
{
	ft_target(stack_a);
	if (stack_a -> length == 2)
		ft_swap(stack_a);
	else if (stack_a -> length == 3)
		ft_three_sort(stack_a);
	else
	{
		ft_only_three_ordered(stack_a, stack_b);
		ft_printf("BP\n");
		ft_print_stack(stack_a);
		ft_insertion(stack_a, stack_b);
		ft_roll_back(stack_a);
	}
}
