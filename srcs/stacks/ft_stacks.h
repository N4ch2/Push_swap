/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacks.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:07:53 by joramire          #+#    #+#             */
/*   Updated: 2023/02/24 18:42:26 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACKS_H
# define FT_STACKS_H

# include   <stdlib.h>
# include   <limits.h>
# include   "../../library/library.h"

typedef struct s_stack
{
	int					pos;
	int					val;
	struct s_stack		*next;
}					t_stack;
#endif