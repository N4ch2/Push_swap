/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:45:52 by joramire          #+#    #+#             */
/*   Updated: 2023/02/22 20:22:57 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARCING_H
# define PARCING_H

# include   <stdlib.h>
# include   "../../library/library.h"

/*This function takes (argc,agv) and make a list of inputs*/
char		**ft_format_input(int argc, char **argv);
/*This function clean correctly the list of numbers*/
char		**ft_clean(char **list, size_t i);

#endif