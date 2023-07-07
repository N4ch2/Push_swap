/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:34:21 by joramire          #+#    #+#             */
/*   Updated: 2023/07/07 20:32:00 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALGORITHM_H
# define FT_ALGORITHM_H

# include   <stdlib.h>
# include   <limits.h>
# include	"../movements/ft_movements.h"
# include	"../stacks/ft_stacks.h"

/*Check if stack have no repetitions (1:TRUE 0:FALSE)*/
int		ft_distinct(t_stack *stack);
/*Check if stack is ordered (1:TRUE 0:FALSE)*/
int		ft_issort(t_stack *stack);
/*Calculate the atribute traget of the nodes of stack_a at begining*/
void	ft_target(t_stack *stack_a);
/*Algorithm to order three elements in the stack*/
void	ft_three_sort(t_stack *stack);
/*Leave the three biggest numbers in the stack_a*/
void	ft_only_three_ordered(t_stack *stack_a, t_stack *stack_b);
/*Check if the stack is ready for the algorithm*/
int		ft_check_algorithm(t_stack *stack_a);
/*Do the algorithm to sort the stack_a*/
void	ft_algorithm(t_stack *stack_a, t_stack *stack_b);

#endif