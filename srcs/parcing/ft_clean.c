/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:06:26 by joramire          #+#    #+#             */
/*   Updated: 2023/07/30 18:37:29 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parcing.h"

char	**ft_clean(char **list, size_t i)
{
	while (i >= 0)
	{
		free(list[i]);
		list[i] = 0;
		if (i == 0)
		{
			free(list);
			return (NULL);
		}
		i--;
	}
	return (NULL);
}

char	**ft_clean_list(char **list)
{
	int		i;
	char	**out;

	i = 0;
	while (list[i] != NULL)
		i++;
	out = ft_clean(list, i);
	return (out);
}
