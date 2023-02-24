/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcing.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:45:52 by joramire          #+#    #+#             */
/*   Updated: 2023/02/24 18:27:29 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARCING_H
# define FT_PARCING_H

# include   <stdlib.h>
# include   <limits.h>
# include   "../../library/library.h"

/*This function takes (argc,agv) and make a list of inputs*/
char		**ft_format_input(int argc, char **argv);
/*This function clean correctly the list of numbers*/
char		**ft_clean(char **list, size_t i);
/*This function check if the list of inputs is correct*/
int			ft_check_list(char **list);


#endif