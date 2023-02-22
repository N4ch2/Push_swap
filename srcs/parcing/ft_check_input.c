/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:51:41 by joramire          #+#    #+#             */
/*   Updated: 2023/02/22 20:00:29 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parcing.h"

/*
solo dígitos o signos de sumas y restas
no puede haber 2 signos
después de numeros no puede haber signos
despues de signos sólo digitos   
*/

int	ft_check_number(char *number)
{
	int	i;

	i = 0;
	while (number[i] != '\0')
	{
		if (number[i] == '+' || number[i] == '-' || ft_isdigit(number[i]) == 1)
		{
			i++;
		}
		else
		{
			
		}
	}
	return (0);
}

int	ft_check_global(char *number)
{
	int		i;
	int		(*checks[1])(char *number);

	i = 0;
	checks[0] = ft_check_number;
	//checks[1] = ft_check_only_numbers;
	//checks[2] = ft_check_no_doble;
	//checks[3] = ft_check_limits;
	while (i < 1)
	{
		if (checks[i](number) == 1)
			return (1);
		i++;
	}
	return (0);
}
