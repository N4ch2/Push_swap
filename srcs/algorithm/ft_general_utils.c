/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_general_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:31:45 by joramire          #+#    #+#             */
/*   Updated: 2023/07/12 19:32:09 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithm.h"

int	ft_abs(int n)
{
	if (n < 0)
		return ((-1) * n);
	else
		return (n);
}

int	ft_min(int n, int m)
{
	if (n < m)
		return (n);
	else
		return (m);
}
