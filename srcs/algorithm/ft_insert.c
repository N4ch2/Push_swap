/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:01:48 by joramire          #+#    #+#             */
/*   Updated: 2023/07/17 21:17:33 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithm.h"

/*This function calculate how many steps have to do node to the top of stack*/
static void	ft_costup(t_stack *stack)
{
	t_stack_node	*head;
	int				mid;

	if (stack -> length % 2 == 0)
		mid = (stack -> length) / 2;
	else
		mid = (stack -> length + 1) / 2;
	head = stack -> head;
	while (head != NULL)
	{
		if (head -> pos <= mid)
			head -> costup = (head -> pos) - 1;
		else
			head -> costup = ((head -> pos) - (stack -> length) - 1);
		head = head -> next;
	}
}

/*This function calculate the following node of current in stack_a*/
static t_stack_node	*ft_following(t_stack_node *current, t_stack *stack_a)
{
	t_stack_node	*pass;
	t_stack_node	*following;

	pass = stack_a -> head;
	while (pass->target < current->target && pass != NULL)
		pass = pass->next;
	if (pass == NULL)
		following = ft_stack_target_min(stack_a);
	else
	{
		following = pass;
		pass = following->next;
		while (pass != NULL)
		{
			if (pass->target > current->target
				&& pass->target < following->target)
				following = pass;
			pass = pass -> next;
		}
	}
	return (following);
}	

/*this funtion executes the movements*/
static void	ft_insert_mov(int loop_a, int loop_b
							, t_stack *stack_a, t_stack *stack_b)
{
	ft_rotate_loops(loop_a, stack_a);
	ft_rotate_loops(loop_b, stack_b);
	ft_push(stack_b, stack_a);
}

/*This function do the action of insert*/
static void	ft_insert_action(t_stack_node *insert, t_stack_node *f
								, t_stack *stack_a, t_stack *stack_b)
{
	int	ins_abs;
	int	foll_abs;
	int	min;

	ins_abs = ft_abs(insert->costup);
	foll_abs = ft_abs(f->costup);
	min = ft_min(ins_abs, foll_abs);
	if (insert->costup * f->costup > 0)
	{
		if (insert->costup > 0)
		{
			ft_common_loops(min, stack_a, stack_b);
			ft_insert_mov((foll_abs - min), (ins_abs - min), stack_a, stack_b);
		}
		if (insert->costup < 0)
		{
			ft_common_loops(-min, stack_a, stack_b);
			ft_insert_mov((f->costup + min), (ins_abs + min), stack_a, stack_b);
		}
	}
	else
		ft_insert_mov(f->costup, insert->costup, stack_a, stack_b);
}

void	ft_insertion(t_stack *stack_a, t_stack *stack_b)
{
	t_stack_node	*insert;
	t_stack_node	*follow;
	t_stack_node	*pass;
	int				global_cost;
	int				current_cost;

	while (stack_b -> length != 0)
	{
		ft_costup(stack_a);
		ft_costup(stack_b);
		insert = stack_b -> head;
		pass = insert -> next;
		while (pass != NULL)
		{
			follow = ft_following(insert, stack_a);
			global_cost = ft_abs(insert->costup) + ft_abs(follow->costup);
			follow = ft_following(pass, stack_a);
			current_cost = ft_abs(pass->costup) + ft_abs(follow->costup);
			if (current_cost < global_cost)
				insert = pass;
			pass = pass -> next;
		}
		follow = ft_following(insert, stack_a);
		ft_insert_action(insert, follow, stack_a, stack_b);
	}
}
