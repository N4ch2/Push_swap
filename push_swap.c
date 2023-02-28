/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:30:23 by joramire          #+#    #+#             */
/*   Updated: 2023/02/28 17:12:55 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library/library.h"
#include "srcs/parcing/ft_parcing.h"
#include "srcs/stacks/ft_stacks.h"

int	main(int argc, char **argv)
{
	char	**list;
	t_stack	*stack_a;

	list = ft_format_input(argc, argv);
	stack_a = ft_fill_stack(list);
	if (stack_a == NULL)
		return (1);
	else
		ft_print_stack(stack_a);
	return (0);
}
