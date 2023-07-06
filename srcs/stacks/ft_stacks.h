/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacks.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:07:53 by joramire          #+#    #+#             */
/*   Updated: 2023/07/06 16:42:00 by joramire         ###   ########.fr       */
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
	int					target;
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
/*Return the direcction of the last node in the stack*/
t_stack_node	*ft_last_node(t_stack_node *node);
/*Add the new node back*/
void	ft_add_node_back(t_stack_node **stack, t_stack_node *new);

#endif