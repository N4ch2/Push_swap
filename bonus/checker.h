/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:36:57 by joramire          #+#    #+#             */
/*   Updated: 2023/07/25 20:04:40 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include	"../srcs/algorithm/ft_algorithm.h"
# include	"get_next_line.h"

/*Check the movements pass by terminal*/
int		ft_check(t_stack *stack_a, t_stack *stack_b);
#endif