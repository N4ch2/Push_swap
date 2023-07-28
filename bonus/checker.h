/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:36:57 by joramire          #+#    #+#             */
/*   Updated: 2023/07/28 17:23:52 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include	"../srcs/algorithm/ft_algorithm.h"
# include	"get_next_line.h"

/*Clean both stacks*/
void	ft_clean_stck(t_stack *stack_a, t_stack *stack_b);
/*Check if mov is a movement*/
int		ft_ismov(char *mov);
/*To compute the movements*/
void	ft_dosimple_mov(char letter, void (*mov)(t_stack *, int),
			t_stack *stack_a, t_stack *stack_b);
/*To compute the movements*/
void	ft_dodouble_mov(char letter, void (*mov)(t_stack *, t_stack *, int),
			t_stack *stack_a, t_stack *stack_b);
/*To clean the list of movements*/
void	ft_clean_cont(void *input);
#endif