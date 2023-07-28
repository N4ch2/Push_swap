/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:35:52 by joramire          #+#    #+#             */
/*   Updated: 2023/07/28 18:21:10 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*read the movements and put it into a list*/
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

void	ft_select_mov(char *mov, t_stack *stack_a, t_stack *stack_b)
{
	if (!ft_strncmp(mov, "ss\n", 4))
		ft_dodouble_mov('o', ft_double_swap, stack_a, stack_b);
	else if (!ft_strncmp(mov, "rr\n", 4))
		ft_dodouble_mov('o', ft_double_rotate, stack_a, stack_b);
	else if (!ft_strncmp(mov, "rrr\n", 5))
		ft_dodouble_mov('o', ft_double_reverse_rotate, stack_a, stack_b);
	else if (mov[0] == 'p')
		ft_dodouble_mov(mov[1], ft_push, stack_a, stack_b);
	else if (mov[0] == 's')
		ft_dosimple_mov(mov[1], ft_swap, stack_a, stack_b);
	else if (mov[0] == 'r' && mov[1] == 'r')
		ft_dosimple_mov(mov[2], ft_reverse_rotate, stack_a, stack_b);
	else if (mov[0] == 'r')
		ft_dosimple_mov(mov[1], ft_rotate, stack_a, stack_b);
}

int	ft_check(t_list *movements, t_stack *stack_a, t_stack *stack_b)
{	
	t_list	*pass;
	int		err_flag;

	err_flag = 0;
	pass = movements;
	while (pass != NULL && err_flag == 0)
	{
		if (ft_ismov(pass->content) == 0)
			err_flag = 1;
		else
			ft_select_mov(pass->content, stack_a, stack_b);
		pass = pass->next;
	}
	ft_lstclear(&movements, ft_clean_cont);
	if (ft_issort(stack_a) && stack_b->length == 0)
		return (ft_printf("OK\n"), 0);
	else if (err_flag == 0)
		return (ft_printf("KO\n"), 1);
	else
		return (ft_putstr_fd("Error\n", 2), 1);
}

int	main(int argc, char **argv)
{
	char			**list;
	t_stack			*stack_a;
	t_stack			*stack_b;
	t_list			*movements;

	movements = ft_fill_movements();
	list = ft_format_input(argc, argv);
	stack_a = NULL;
	if (list != NULL)
		stack_a = ft_fill_stack(list);
	else if (list == NULL && argc != 1)
		ft_putstr_fd("Error\n", 2);
	stack_b = ft_empty_stack();
	if (stack_a == NULL || stack_b == NULL)
		return (ft_clear_stack(stack_b), 1);
	if (ft_distinct(stack_a) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		ft_clean_stck(stack_a, stack_b);
		return (1);
	}
	else
		ft_check(movements, stack_a, stack_b);
	return (ft_clean_stck(stack_a, stack_b), 0);
}
