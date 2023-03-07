/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movements.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:06:51 by joramire          #+#    #+#             */
/*   Updated: 2023/03/07 19:24:32 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MOVEMENTS_H
# define FT_MOVEMENTS_H

# include   <stdlib.h>
# include   <limits.h>
# include	"../stacks/ft_stacks.h"

/*Swap the two elements in the top of the stack*/
void	ft_swap(t_stack *stack);
/*Do a double swap*/
void	ft_double_swap(t_stack *stack1, t_stack *stack2);
/*Push the top of the stack a to the stack b*/
void	ft_push(t_stack *origin, t_stack *destiny);
/*The first element becomes the last one*/
void	ft_rotate(t_stack *stack);
/*Do rotate on stack 1 and 2*/
void	ft_double_rotate(t_stack *stack1, t_stack *stack2);
/*The last element becomes the first one*/
void	ft_reverse_rotate(t_stack *stack);
/*Do reverse rotate on stack 1 and 2*/
void	ft_double_reverse_rotate(t_stack *stack1, t_stack *stack2);

#endif