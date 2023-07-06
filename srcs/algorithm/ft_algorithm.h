/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:34:21 by joramire          #+#    #+#             */
/*   Updated: 2023/07/06 16:26:51 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALGORITHM_H
# define FT_ALGORITHM_H

# include   <stdlib.h>
# include   <limits.h>
# include	"../movements/ft_movements.h"
# include	"../stacks/ft_stacks.h"

/*Check if stack have no repetitions (0:TRUE 1:FALSE)*/
int		ft_distinct(t_stack *stack);
/*Check if stack is ordered (0:TRUE 1:FALSE)*/
int		ft_isrange(t_stack *stack);


#endif