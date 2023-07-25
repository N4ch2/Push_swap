/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:35:52 by joramire          #+#    #+#             */
/*   Updated: 2023/07/25 20:14:29 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	char			**list;
	t_stack			*stack_a;
	t_stack			*stack_b;

	list = ft_format_input(argc, argv);
	stack_a = NULL;
	if (list != NULL)
		stack_a = ft_fill_stack(list);
	stack_b = ft_empty_stack();
	if (stack_a == NULL || stack_b == NULL)
		return (ft_clear_stack(stack_b), 1);
	if (ft_distinct(stack_a) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		ft_clear_stack(stack_a);
		ft_clear_stack(stack_b);
		return (1);
	}
	else
		ft_check(stack_a, stack_b);
	ft_clear_stack(stack_a);
	ft_clear_stack(stack_b);
	return (0);
}
