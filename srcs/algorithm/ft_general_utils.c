/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_general_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:31:45 by joramire          #+#    #+#             */
/*   Updated: 2023/07/20 17:38:54 by joramire         ###   ########.fr       */
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

void	ft_presort(t_stack *stack_a, t_stack *stack_b)
{
	int				limit;
	t_stack_node	*current;
	t_stack_node	*next;

	limit = (stack_a -> length) / 2;
	current = stack_a -> head;
	while (stack_a -> length > limit && stack_a -> length > 3)
	{
		next = current -> next;
		if (current -> target - 1 <= limit)
			ft_push(stack_a, stack_b, 1);
		else
			ft_rotate(stack_a, 1);
		current = next;
	}
}
