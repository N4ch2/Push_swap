/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:34:21 by joramire          #+#    #+#             */
/*   Updated: 2023/07/05 21:00:56 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALGORITHM_H
# define FT_ALGORITHM_H

# include   <stdlib.h>
# include   <limits.h>
# include	"../movements/ft_movements.h"
# include	"../stacks/ft_stacks.h"

/*Check if stack is ordered (0:TRUE 1:FALSE)*/
int		ft_isrange(t_stack *stack);

#endif