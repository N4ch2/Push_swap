/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movements.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacho <nacho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:06:51 by joramire          #+#    #+#             */
/*   Updated: 2023/03/06 21:40:43 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MOVEMENTS_H
# define FT_MOVEMENTS_H

# include   <stdlib.h>
# include   <limits.h>
# include	"../stacks/ft_stacks.h"

/*Swap the two elements in the top of the stack*/
void	ft_swap(t_stack *stack);
/*Push the top of the stack a to the stack b*/
void    ft_push(t_stack *origin, t_stack *destiny);

#endif