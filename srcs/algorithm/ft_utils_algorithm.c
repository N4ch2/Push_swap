/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_algorithm.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:30:21 by joramire          #+#    #+#             */
/*   Updated: 2023/07/06 16:45:07 by joramire         ###   ########.fr       */
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
				return (1);
			pass = pass -> next;
		}
		current = current -> next;
	}
	return (0);
}

int	ft_isrange(t_stack *stack)
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
			return (1);
		first = second;
		second = second -> next;
	}
	return (0);
}
