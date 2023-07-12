/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:34:21 by joramire          #+#    #+#             */
/*   Updated: 2023/07/12 19:41:29 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALGORITHM_H
# define FT_ALGORITHM_H

# include   <stdlib.h>
# include   <limits.h>
# include	"../movements/ft_movements.h"
# include	"../stacks/ft_stacks.h"

/*Check if stack have no repetitions (1:TRUE 0:FALSE)*/
int				ft_distinct(t_stack *stack);
/*Check if stack is ordered (1:TRUE 0:FALSE)*/
int				ft_issort(t_stack *stack);
/*Calculate the atribute traget of the nodes of stack_a at begining*/
void			ft_target(t_stack *stack_a);
/*Algorithm to order three elements in the stack*/
void			ft_three_sort(t_stack *stack);
/*Leave the three biggest numbers in the stack_a*/
void			ft_only_three_ordered(t_stack *stack_a, t_stack *stack_b);
/*Check if the stack is ready for the algorithm*/
int				ft_check_algorithm(t_stack *stack_a);
/*Do the algorithm to sort the stack_a*/
void			ft_algorithm(t_stack *stack_a, t_stack *stack_b);
/*Calculate the absolute valor of n*/
int				ft_abs(int n);
/*Calculate the min between n and m*/
int				ft_min(int n, int m);
/*Do loops in both stacks (loops > 0 -> r) (loops < 0 -> rr)*/
void			ft_common_loops(int loops, t_stack *stack_a, t_stack *stack_b);
/*Loop of rotation (loops > 0 -> r) (loops < 0 -> rr)*/
void			ft_rotate_loops(int loops, t_stack *stack);
/*Set stack_a in head*/
void			ft_roll_back(t_stack *stack_a);
/*Algorithm to insert stack_b into stack_a*/
void			ft_insertion(t_stack *stack_a, t_stack *stack_b);
/*This function claculate the min node of the stack*/
t_stack_node	*ft_stack_target_min(t_stack *stack);

#endif
