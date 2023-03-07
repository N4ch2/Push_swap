/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:30:45 by joramire          #+#    #+#             */
/*   Updated: 2023/03/07 18:40:35 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stacks.h"

static t_stack_node	*ft_new_node(int position, int value)
{
	t_stack_node	*node;

	node = malloc(sizeof(t_stack_node));
	if (node == NULL)
		return (NULL);
	node -> pos = position;
	node -> val = value;
	node -> next = NULL;
	return (node);
}

t_stack_node	*ft_last_node(t_stack_node *node)
{
	if (node == NULL)
		return (NULL);
	else if (node -> next == NULL)
		return (node);
	return (ft_last_node(node -> next));
}

void	ft_add_node_back(t_stack_node **stack, t_stack_node *new)
{
	t_stack_node	*last;

	if (*stack == NULL)
		*stack = new;
	else
	{
		last = ft_last_node(*stack);
		if (new != NULL)
			last -> next = new;
	}
}

t_stack_node	*ft_fill_stack_node(char **list, int *length)
{
	int				i;
	t_stack_node	*head;
	t_stack_node	*aux;

	i = 0;
	while (list[i] != NULL)
	{
		if (i == 0)
			head = ft_new_node(i + 1, ft_atoi(list[i]));
		else
		{
			aux = ft_new_node(i + 1, ft_atoi(list[i]));
			ft_add_node_back(&head, aux);
		}
		i++;
	}
	*length = i;
	return (head);
}

t_stack	*ft_fill_stack(char **list)
{
	t_stack	*stack;
	int		length;

	if (ft_check_list(list) == 0)
	{
		stack = malloc(sizeof(t_stack));
		if (stack == NULL)
			return (NULL);
		stack -> name = "Stack A";
		stack -> head = ft_fill_stack_node(list, &length);
		stack -> length = length;
		return (stack);
	}
	else
		return (NULL);
}
