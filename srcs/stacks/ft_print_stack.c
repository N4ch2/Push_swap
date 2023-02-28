/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:43:32 by joramire          #+#    #+#             */
/*   Updated: 2023/02/28 17:31:22 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stacks.h"

void	ft_print_stack(t_stack *stack)
{
	while (stack != NULL)
	{
		ft_printf("pos: %i val: %i |\n", stack -> pos, stack -> val);
		stack = stack -> next;
	}
	ft_printf("-------------------------------------------------------------\n");
}
