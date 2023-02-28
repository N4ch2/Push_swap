/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacks.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:07:53 by joramire          #+#    #+#             */
/*   Updated: 2023/02/28 16:53:34 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACKS_H
# define FT_STACKS_H

# include   <stdlib.h>
# include   <limits.h>
# include   "../../library/library.h"
# include   "../parcing/ft_parcing.h"

/*
typedef struct s_stack_info
{
	int					pos;
	int					val;
	struct s_stack_		*next;
}
*/

typedef struct s_stack
{
	int					pos;
	int					val;
	struct s_stack		*next;
}					t_stack;

/*Transform the matrix list to a struct stack  to do the algorithm*/
t_stack		*ft_fill_stack(char **list);
/*Print a stack*/
void		ft_print_stack(t_stack *stack);

#endif