/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:33:32 by joramire          #+#    #+#             */
/*   Updated: 2023/07/07 14:14:30 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithm.h"

void	ft_shuffle(t_stack_node *first, t_stack_node *second, t_stack *stack)
{
	if (first -> target == 2 && second -> target == 1)
		ft_swap(stack);
	else if (first -> target == 2 && second -> target == 3)
		ft_reverse_rotate(stack);
	else if (first -> target == 3 && second -> target == 1)
		ft_rotate(stack);
	else if (first -> target == 2 && second -> target == 1)
		ft_swap(stack);
	else if (first -> target == 3 && second -> target == 2)
	{
		ft_swap(stack);
		ft_reverse_rotate(stack);
	}
	else if (first -> target == 3 && second -> target == 2)
	{
		ft_swap(stack);
		ft_rotate(stack);
	}
}

void	ft_three_sort(t_stack *stack)
{
	t_stack_node	*first;
	t_stack_node	*second;
	t_stack_node	*third;

	ft_target(stack);
	first = stack -> head;
	second = first -> next;
	third = second -> next;
	if (ft_issort(stack) == 1)
		return ;
	else
		ft_shuffle(first, second, stack);
}
