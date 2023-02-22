/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:30:23 by joramire          #+#    #+#             */
/*   Updated: 2023/02/22 21:15:25 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library/library.h"
#include "srcs/parcing/parcing.h"

int	main(int argc, char **argv)
{
	char	**list;
	int		i;

	list = ft_format_input(argc, argv);
	i = 0;
	while (list && list[i] != NULL)
	{
		ft_printf("%s\n", list[i]);
		i++;
	}
}
