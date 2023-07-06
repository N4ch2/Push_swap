/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:43:32 by joramire          #+#    #+#             */
/*   Updated: 2023/07/06 16:57:22 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stacks.h"

void	ft_change_pos_stack(t_stack *stack, int i)
{
	t_stack_node	*iter;

	iter = stack -> head;
	while (iter != NULL)
	{
		iter -> pos += i;
		iter = iter -> next;
	}
}

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

	ft_printf("----------------------------------------------------------|\n");
	ft_printf("|%s| ", stack -> name);
	ft_printf("length: %i\n", stack -> length);
	head = stack -> head;
	ft_printf("----------------------------------------------------------|\n");
	while (head != NULL)
	{
		ft_printf("|---%i---| ", head->val);
		ft_printf("pos: %i ", head -> pos);
		ft_printf("target: %i\n", head -> target);

		head = head -> next;
	}
	ft_printf("----------------------------------------------------------|\n");
}
