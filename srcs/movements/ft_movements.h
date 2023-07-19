/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movements.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:06:51 by joramire          #+#    #+#             */
/*   Updated: 2023/07/19 21:20:31 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MOVEMENTS_H
# define FT_MOVEMENTS_H

# include   <stdlib.h>
# include   <limits.h>
# include	"../stacks/ft_stacks.h"

/*Swap the two elements in the top of the stack*/
void	ft_swap(t_stack *stack, int print);
/*Do a double swap*/
void	ft_double_swap(t_stack *stack1, t_stack *stack2, int print);
/*Push the top of the stack a to the stack b*/
void	ft_push(t_stack *origin, t_stack *destiny, int print);
/*The first element becomes the last one*/
void	ft_rotate(t_stack *stack, int print);
/*Do rotate on stack 1 and 2*/
void	ft_double_rotate(t_stack *stack1, t_stack *stack2, int print);
/*The last element becomes the first one*/
void	ft_reverse_rotate(t_stack *stack, int print);
/*Do reverse rotate on stack 1 and 2*/
void	ft_double_reverse_rotate(t_stack *stack1, t_stack *stack2, int print);

#endif