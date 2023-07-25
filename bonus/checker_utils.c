/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:56:02 by joramire          #+#    #+#             */
/*   Updated: 2023/07/25 21:52:32 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_list	*ft_fill_movements(void)
{
	t_list	*movements;
	t_list	*new;
	char	*input;

	input = get_next_line(0);
	movements = NULL;
	if (input != NULL)
	{
		movements = ft_lstnew(input);
		input = get_next_line(0);
	}
	while (input != NULL)
	{
		new = ft_lstnew(input);
		ft_lstadd_back(&movements, new);
		input = get_next_line(0);
	}
	return (movements);
}

void	ft_do_movsp(char *mov, t_stack *stack_a, t_stack *stack_b)
{
	
}

int	ft_do_movs(t_list *movements, t_stack *stack_a, t_stack *stack_b)
{
	char	*mov;
	t_list	*pass;

	pass = movements;
	while (pass != NULL)
	{
		mov = pass->content;
		if (mov[0] == 's' || mov[0] == 'p')
			ft_do_movsp(mov, stack_a, stack_b);
		else if (mov[0] == 'r')
			ft_do_movr(mov, stack_a, stack_b);
		else
		{
			ft_lstclear(movements, free());
			return (1);
		}
		pass = pass->next;
	}
	ft_lstclear(movements, free());
	return (0);
}

int	ft_check(t_stack *stack_a, t_stack *stack_b)
{	
	t_list	*movements;

	movements = ft_fill_movements();
	if (ft_do_movs(movements, stack_a, stack_b) == 1)
		ft_putstr_fd("Error\n", 2);
	ft_printf("Input\n");
	while (movements != NULL)
	{
		ft_printf("%s", movements->content);
		movements = movements->next;
	}
	if (ft_issort(stack_a) && stack_b->length == 0)
		return (ft_printf("OK\n"), 0);
	else
		return (ft_printf("KO\n"), 1);
}
