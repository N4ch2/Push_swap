/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:56:02 by joramire          #+#    #+#             */
/*   Updated: 2023/07/28 18:56:15 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_clean_stck(t_stack *stack_a, t_stack *stack_b)
{
	ft_clear_stack(stack_a);
	ft_clear_stack(stack_b);
}

int	ft_ismov(char *mov)
{
	if (!ft_strncmp(mov, "pa\n", 4) || !ft_strncmp(mov, "pb\n", 4))
		return (1);
	else if (!ft_strncmp(mov, "sa\n", 4) || !ft_strncmp(mov, "sb\n", 4))
		return (1);
	else if (!ft_strncmp(mov, "ra\n", 4) || !ft_strncmp(mov, "rb\n", 4))
		return (1);
	else if (!ft_strncmp(mov, "rra\n", 4) || !ft_strncmp(mov, "rrb\n", 4))
		return (1);
	else if (!ft_strncmp(mov, "ss\n", 4) || !ft_strncmp(mov, "rr\n", 4))
		return (1);
	else if (!ft_strncmp(mov, "rrr\n", 5))
		return (1);
	else
		return (0);
}

void	ft_dosimple_mov(char letter, void (*mov)(t_stack *, int),
						t_stack *stack_a, t_stack *stack_b)
{
	if (letter == 'a')
		(*mov)(stack_a, 0);
	if (letter == 'b')
		(*mov)(stack_b, 0);
}

void	ft_dodouble_mov(char letter, void (*mov)(t_stack *, t_stack *, int),
						t_stack *stack_a, t_stack *stack_b)
{
	if (letter == 'a')
		(*mov)(stack_b, stack_a, 0);
	if (letter == 'b')
		(*mov)(stack_a, stack_b, 0);
	if (letter == 'o')
		(*mov)(stack_a, stack_b, 0);
}

void	ft_clean_cont(void *input)
{
	free(input);
}
