/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_algorithm.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:33:32 by joramire          #+#    #+#             */
/*   Updated: 2023/07/07 20:27:28 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithm.h"

void	ft_shuffle(t_stack_node *f, t_stack_node *s
					, t_stack_node *t, t_stack *stack)
{
	if (s->target < f->target && f->target < t->target)
		ft_swap(stack);
	else if (t->target < f->target && f->target < s->target)
		ft_reverse_rotate(stack);
	else if (s->target < t->target && t->target < f->target)
		ft_rotate(stack);
	else if (t->target < s->target && s->target < f->target)
	{
		ft_swap(stack);
		ft_reverse_rotate(stack);
	}
	else if (f->target < t->target && t->target < s->target)
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

	first = stack -> head;
	second = first -> next;
	third = second -> next;
	if (ft_issort(stack) == 1)
		return ;
	else
		ft_shuffle(first, second, third, stack);
}
