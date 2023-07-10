/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:01:48 by joramire          #+#    #+#             */
/*   Updated: 2023/07/10 19:22:07 by joramire         ###   ########.fr       */
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
static t_stack_node	*ft_following(t_stack_node *current, stack_t *stack_a)
{
	t_stack_node	*pass;
	t_stack_node	*following;

	pass = stack_a -> head;
	following = pass;
	while (pass != NULL)
	{
		if (pass->target > current->target && pass->target < following->target)
			following = pass;
		pass = pass -> next;
	}
	return (following);
}

/*this funtion executes the movements*/
static void ft_insert_mov()
{} 

/*This function do the action of insert*/
static void	ft_insert_action(t_stack_node *insert, t_stack_node *follow
								t_stack *stack_a, t_stack *stack_b)
{
	int	ins_cost;
	int	foll_cost;
	int	min;

	ins_loop = insert->costup;
	foll_cost = follow->costup;
	if (insert->costup * insert->costup > 0)
	{
		min = ft_min(ins_cost, foll_cost);
		while (min-- > -1)
			ft_double_rotate(stack_a, stack_b);
	}
	else
	{
		
	}
}

void	ft_insertion(t_stack *stack_a, t_stack *stack_b)
{
	t_stack_node	*insert;
	t_stack_node	*follow;
	t_stack_node	*pass;
	int				global_cost;
	int				current_cost;

	ft_costup(stack_a);
	ft_costup(stack_b);
	while (stack_b -> length == 0)
	{
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
		ft_insert_action(insert, ft_following(insert), stack_a, stack_b);
	}
}
