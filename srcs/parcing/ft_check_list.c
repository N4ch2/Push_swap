/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:51:41 by joramire          #+#    #+#             */
/*   Updated: 2023/02/24 18:31:26 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parcing.h"


static int	ft_compare(char *number, int sign)
{
	char	*max;
	char	*min;
	int		i;

	i = 0;
	max = ft_itoa(INT_MAX);
	min = ft_itoa(INT_MIN);
	while (number[i] != '\0')
	{
		if (number[i] > max[i] && sign == 0)
			return (1);
		else if (number[i] > min[i + 1] && sign == 1)
			return (1);
		else
			i++;
	}
	return (0);
}

static int	ft_check_limits(char *number)
{
	int		out;
	int		sign;
	int		init;
	int		end;

	init = 0;
	out = 0;
	sign = 0;
	while (number[init] == '0' || number[init] == '+' || number[init] == '-')
	{
		if (number[init] == '-')
			sign = 1;
		init++;
	}
	end = init;
	while (number[end] != '\0')
		end++;
	if ((end - init) > 10)
		out = 1;
	if ((end - init) == 10)
		out = ft_compare((number + init), sign);
	if (out == 1)
		ft_printf("Error: some number out of bounds\n");
	return (out);
}

static int	ft_check_only_numbers(char *number)
{
	int	i;

	i = 0;
	if (number[i] == '+' || number[i] == '-')
	{
		i++;
		if (ft_isdigit(number[i]) == 0)
		{
			ft_printf("Error: not valid expresion in the list\n");
			return (1);
		}
	}
	while (number[i] != '\0')
	{
		if (ft_isdigit(number[i]) == 1)
			i++;
		else
		{
			ft_printf("Error: not valid expresion in the list\n");
			return (1);
		}
	}
	return (0);
}

int	ft_check_list(char **list)
{
	int				i;
	int				j;
	static int		(*checks[2])(char *number);

	i = 0;
	j = 0;
	checks[0] = ft_check_only_numbers;
	checks[1] = ft_check_limits;
	while (list[i] != NULL)
	{
		while (j < 2)
		{
			if (checks[j](list[i]) == 1)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
