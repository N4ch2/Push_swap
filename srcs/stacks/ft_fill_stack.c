/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:30:45 by joramire          #+#    #+#             */
/*   Updated: 2023/02/28 16:32:07 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stacks.h"

static t_stack	*ft_new_node(int position, int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (node == NULL)
		return (NULL);
	node -> pos = position;
	node -> val = value;
	node -> next = NULL;
	return (node);
}

static t_stack	*ft_last_node(t_stack *node)
{
	if (node == NULL)
		return (NULL);
	else if (node -> next == NULL)
		return (node);
	return (ft_last_node(node -> next));
}

static void	ft_add_node_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (*stack == NULL)
		*stack = new;
	else
	{
		last = ft_last_node(*stack);
		if (new != NULL)
			last -> next = new;
	}
}

t_stack	*ft_fill_stack(char **list)
{
	int		i;
	t_stack	*head;
	t_stack	*aux;

	if (ft_check_list(list) == 0)
	{
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
		return (head);
	}
	else
		return (NULL);
}
