/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacks.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacho <nacho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:07:53 by joramire          #+#    #+#             */
/*   Updated: 2023/03/06 21:34:38 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACKS_H
# define FT_STACKS_H

# include   <stdlib.h>
# include   <limits.h>
# include   "../../library/library.h"
# include   "../parcing/ft_parcing.h"

typedef struct s_stack_node
{
	int					pos;
	int					val;
	struct s_stack_node	*next;
}					t_stack_node;

typedef struct s_stack
{
	char					*name;
	int						length;
	struct s_stack_node		*head;
}					t_stack;

/*Increment i at ecah pos of the stack*/
void			ft_change_pos_stack(t_stack *stack, int i);
/*Transform the matrix list to a struct stack  to do the algorithm*/
t_stack			*ft_fill_stack(char **list);
/*Create an empty stack*/
t_stack			*ft_empty_stack(void);
/*Print a stack*/
void			ft_print_stack(t_stack *stack);

#endif