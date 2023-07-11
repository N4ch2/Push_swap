/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:00:07 by joramire          #+#    #+#             */
/*   Updated: 2023/07/11 18:24:26 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithm.h"

int	ft_abs(int n)
{
	if (n < 0)
		return ((-1) * n);
	else
		return (n);
}

int	ft_min(int n, int m)
{
	if (n < m)
		return (n);
	else
		return (m);
}

void	ft_common_loops(int loops, t_stack *stack_a, t_stack *stack_b)
{
	while (loops > 0)
	{
		ft_double_rotate(stack_a, stack_b);
		loops--;
	}
	while (loops < 0)
	{
		ft_double_reverse_rotate(stack_a, stack_b);
		loops++;
	}
}

void	ft_rotate_loops(int loops, t_stack *stack)
{
	while (loops > 0)
	{
		ft_rotate(stack);
		loops--;
	}
	while (loops < 0)
	{
		ft_reverse_rotate(stack);
		loops++;
	}
}

void	ft_roll_back(t_stack *stack_a)
{
	t_stack_node	*head;

	head = stack_a -> head;
	while (head != NULL && head->target != 1)
		head = head -> next;
	if (head -> pos < stack_a -> length)
		ft_rotate_loops(head -> pos - 1, stack_a);
	else
		ft_rotate_loops(-(stack_a->length - head->pos), stack_a);
}









