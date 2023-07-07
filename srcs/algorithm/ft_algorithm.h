/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:34:21 by joramire          #+#    #+#             */
/*   Updated: 2023/07/07 13:44:35 by joramire         ###   ########.fr       */
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



#endif