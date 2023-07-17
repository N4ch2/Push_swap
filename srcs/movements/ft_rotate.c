/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:48:07 by joramire          #+#    #+#             */
/*   Updated: 2023/07/17 19:58:03 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_movements.h"

void	ft_rotate(t_stack *stack)
{
	t_stack_node	*head;
	t_stack_node	*last;

	head = stack -> head;
	if (head != NULL && head -> next != NULL)
	{
		last = ft_last_node(head);
		stack -> head = head -> next;
		head -> next = NULL;
		ft_add_node_back(&stack -> head, head);
		ft_change_pos_stack(stack, -1);
		head -> pos = stack -> length;
	}
	ft_printf("r%c\n", stack -> letter);
}

void	ft_double_rotate(t_stack *stack1, t_stack *stack2)
{
	ft_rotate(stack1);
	ft_rotate(stack2);
	ft_printf("rr\n");
}

static void	delete_last_node(t_stack_node *head, t_stack_node *last)
{
	if (head -> next == last)
		head -> next = NULL;
	else
		delete_last_node(head -> next, last);
}

void	ft_reverse_rotate(t_stack *stack)
{
	t_stack_node	*head;
	t_stack_node	*last;

	head = stack -> head;
	if (head != NULL && head -> next != NULL)
	{
		last = ft_last_node(head);
		last -> next = head;
		stack -> head = last;
		delete_last_node(head, last);
		ft_change_pos_stack(stack, 1);
		last -> pos = 1;
	}
	ft_printf("rr%c\n", stack -> letter);
}

void	ft_double_reverse_rotate(t_stack *stack1, t_stack *stack2)
{
	ft_reverse_rotate(stack1);
	ft_reverse_rotate(stack2);
	ft_printf("rrr\n");
}
