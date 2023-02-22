/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:06:26 by joramire          #+#    #+#             */
/*   Updated: 2023/02/22 20:22:35 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parcing.h"

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
