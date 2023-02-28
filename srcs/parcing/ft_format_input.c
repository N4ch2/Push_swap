/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:15:12 by joramire          #+#    #+#             */
/*   Updated: 2023/02/28 13:35:06 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parcing.h"

/*This function tranform a string of numbers separated by "s" to a list*/
char	**ft_chain_to_list(char *input)
{
	char	**out;

	out = ft_split(input, ' ');
	if (out[0] == NULL)
	{
		ft_clean(out, 0);
		return (NULL);
	}
	return (out);
}

char	**ft_fill_list(int argc, char ***argv)
{
	char	**list;
	char	*elem;
	int		i;

	list = (char **)malloc(argc * sizeof(char *));
	if (list == NULL)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		elem = ft_strdup((*argv)[i]);
		if (elem == NULL)
		{
			list = ft_clean(list, i);
			return (NULL);
		}
		else
			list[i - 1] = elem;
		i++;
	}
	list[i - 1] = NULL;
	return (list);
}

char	**ft_format_input(int argc, char **argv)
{
	char	**out;

	if (argc == 1)
	{
		ft_printf("Error: must to introduce a list of numbers\n");
		out = NULL;
	}
	else if (argc == 2)
		out = ft_chain_to_list(argv[1]);
	else
		out = ft_fill_list(argc, &argv);
	if (out == NULL && argc != 1)
		ft_printf("Error: bad memory allocation or list empty\n");
	return (out);
}
