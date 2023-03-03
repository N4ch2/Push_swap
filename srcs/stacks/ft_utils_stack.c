/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:43:32 by joramire          #+#    #+#             */
/*   Updated: 2023/03/03 14:04:32 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stacks.h"

t_stack	*ft_empty_stack(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
		return (NULL);
	stack -> name = "Stack B";
	stack -> head = NULL;
	stack -> length = 0;
	return (stack);
}

void	ft_print_stack(t_stack *stack)
{
	t_stack_node	*head;

	ft_printf("name: %s\n", stack -> name);
	ft_printf("length: %i\n", stack -> length);
	head = stack -> head;
	while (head != NULL)
	{
		ft_printf("| pos: %i val: %i |\n", head -> pos, head -> val);
		head = head -> next;
	}
	ft_printf("-------------------------------------------------------------\n");
}
