/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:38:37 by nacho             #+#    #+#             */
/*   Updated: 2023/07/19 21:19:44 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_movements.h"

void	ft_push(t_stack *origin, t_stack *destiny, int print)
{
	t_stack_node	*head;

	head = origin -> head;
	if (head != NULL)
	{
		destiny -> length += 1;
		ft_change_pos_stack(destiny, 1);
		origin -> head = head -> next;
		head -> next = destiny -> head;
		destiny -> head = head;
		ft_change_pos_stack(origin, -1);
		origin -> length -= 1;
	}
	if (print == 1)
		ft_printf("p%c\n", destiny -> letter);
}
