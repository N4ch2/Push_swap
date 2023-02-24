/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:30:23 by joramire          #+#    #+#             */
/*   Updated: 2023/02/24 18:28:34 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library/library.h"
#include "srcs/parcing/ft_parcing.h"
#include "srcs/stacks/ft_stacks.h"

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
	ft_printf("check: %i\n", ft_check_list(list));
}
