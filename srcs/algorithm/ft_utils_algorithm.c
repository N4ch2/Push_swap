/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_algorithm.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:30:21 by joramire          #+#    #+#             */
/*   Updated: 2023/07/07 12:35:59 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithm.h"

int	ft_distinct(t_stack *stack)
{
	t_stack_node	*current;
	t_stack_node	*pass;
	int				current_val;
	int				pass_val;

	current = stack -> head;
	while (current -> next != NULL)
	{
		current_val = current -> val;
		pass = current -> next;
		while (pass != NULL)
		{
			pass_val = pass -> val;
			if (pass_val == current_val)
				return (0);
			pass = pass -> next;
		}
		current = current -> next;
	}
	return (1);
}

int	ft_issort(t_stack *stack)
{
	t_stack_node	*first;
	t_stack_node	*second;
	int				first_val;
	int				second_val;

	first = stack -> head;
	second = first -> next;
	while (second != NULL)
	{
		first_val = first -> val;
		second_val = second -> val;
		if (second_val < first_val)
			return (0);
		first = second;
		second = second -> next;
	}
	return (1);
}

static int	ft_count_no_targered(t_stack *stack_a)
{
	t_stack_node	*current;
	int				counter;

	current = stack_a -> head;
	counter = 0;
	while (current != NULL)
	{
		if (current -> target == 0)
			counter++;
		current = current ->next;
	}
	return (counter);
}

void	ft_target(t_stack *stack_a)
{
	t_stack_node	*select;
	t_stack_node	*pass;
	int				target_val;

	target_val = 1;
	while (ft_count_no_targered(stack_a) != 1)
	{
		select = stack_a -> head;
		while (select -> target != 0 && select != NULL)
			select = select -> next;
		pass = select -> next;
		while (pass -> target != 0 && pass != NULL)
			pass = pass -> next;
		while (pass != NULL)
		{
			if ((pass -> val < select -> val) && pass -> target == 0)
				select = pass;
			pass = pass -> next;
		}
		select -> target = target_val++;
	}
	select = stack_a -> head;
	while (select -> target != 0)
		select = select -> next;
	select -> target = target_val;
}
