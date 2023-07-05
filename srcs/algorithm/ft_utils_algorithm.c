/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_algorithm.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:30:21 by joramire          #+#    #+#             */
/*   Updated: 2023/07/05 21:12:04 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithm.h"

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
