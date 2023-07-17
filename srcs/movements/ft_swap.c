/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:07:55 by joramire          #+#    #+#             */
/*   Updated: 2023/07/17 19:51:56 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_movements.h"

void	ft_swap(t_stack *stack)
{
	t_stack_node	*head;
	t_stack_node	*next;

	head = stack -> head;
	if (head != NULL && head -> next != NULL)
	{
		next = head -> next;
		head -> next = next -> next;
		next -> next = head;
		stack -> head = next;
		stack -> head -> pos--;
		stack -> head -> next -> pos++;
	}
	ft_printf("s%c\n", stack -> letter);
}

void	ft_double_swap(t_stack *stack1, t_stack *stack2)
{
	ft_swap(stack1);
	ft_swap(stack2);
	ft_printf("ss\n");
}
