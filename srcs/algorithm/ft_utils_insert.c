/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:00:07 by joramire          #+#    #+#             */
/*   Updated: 2023/07/19 21:46:19 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithm.h"

t_stack_node	*ft_stack_target_min(t_stack *stack)
{
	t_stack_node	*min;
	t_stack_node	*pass;

	min = stack -> head;
	pass = min -> next;
	while (pass != NULL)
	{
		if (pass->target < min->target)
			min = pass;
		pass = pass->next;
	}
	return (min);
}

void	ft_common_loops(int loops, t_stack *stack_a, t_stack *stack_b)
{
	while (loops > 0)
	{
		ft_double_rotate(stack_a, stack_b, 1);
		loops--;
	}
	while (loops < 0)
	{
		ft_double_reverse_rotate(stack_a, stack_b, 1);
		loops++;
	}
}

void	ft_rotate_loops(int loops, t_stack *stack)
{
	while (loops > 0)
	{
		ft_rotate(stack, 1);
		loops--;
	}
	while (loops < 0)
	{
		ft_reverse_rotate(stack, 1);
		loops++;
	}
}

void	ft_roll_back(t_stack *stack_a)
{
	t_stack_node	*head;

	head = stack_a -> head;
	while (head != NULL && head->target != 1)
		head = head -> next;
	if (head -> target < stack_a -> length)
		ft_rotate_loops(head -> pos - 1, stack_a);
	else
		ft_rotate_loops(-(stack_a->length - head->pos), stack_a);
}
