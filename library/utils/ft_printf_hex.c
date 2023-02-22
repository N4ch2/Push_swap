/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacho <nacho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:08:56 by joramire          #+#    #+#             */
/*   Updated: 2023/01/02 15:13:08 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libutils.h"

void	ft_aux_hex_width(unsigned int n, t_pinfo *info)
{
	if (info -> hastag == 1 && n != 0)
		info -> width -= 2;
	if (info -> dash == 1)
	{
		if (info -> hastag == 1 && n != 0)
			info -> alng += write(1, "0x", 2);
		info -> alng += ft_printf_putnbr_base(n, "0123456789abcdef");
	}
	if (ft_printf_lengnum(n, "0123456789", 1) == 0)
		info -> width -= 1;
	while (info -> width > ft_printf_lengnum(n, "0123456789abcdef", 0))
	{
		info -> alng += write(1, " ", 1);
		info -> width -= 1;
	}
	if (info -> dash == 0)
	{
		if (info -> hastag == 1 && n != 0)
			info -> alng += write(1, "0x", 2);
		info -> alng += ft_printf_putnbr_base(n, "0123456789abcdef");
	}
}

void	ft_aux_hex_zero(unsigned int n, t_pinfo *info)
{
	if (n == 0)
		info -> width -= 1;
	if (info -> hastag == 1 && n != 0)
	{
		info -> width -= 2;
		info -> alng += write(1, "0x", 2);
	}
	while (info -> width > ft_printf_lengnum(n, "0123456789abcdef", 0))
	{
		info -> alng += write(1, "0", 1);
		info -> width -= 1;
	}
	if (info -> dash == 0)
		info -> alng += ft_printf_putnbr_base(n, "0123456789abcdef");
}

void	ft_aux_hex_prc(unsigned int n, t_pinfo *info, int aux)
{
	int	max;

	aux = info -> prc;
	max = ft_integer_max(aux, ft_printf_lengnum(n, "0123456789abcdef", 0));
	if (n == 0 && info -> prc == 0)
		info -> prc -= 1;
	if (info -> hastag == 1 && n != 0)
		info -> width -= 2;
	if ((info -> dash == 0 || info -> zero == 1))
		ft_printf_integer_space(info, max);
	if (info -> hastag == 1 && n != 0)
		info -> alng += write(1, "0x", 2);
	while (info -> prc > ft_printf_lengnum(n, "0123456789abcdef", 0))
	{
		info -> alng += write(1, "0", 1);
		info -> prc -= 1;
	}
	if (!(n == 0 && aux * (info -> prc) == 0))
		info -> alng += ft_printf_putnbr_base(n, "0123456789abcdef");
	if (info -> dash == 1 || info -> zero == 1)
		ft_printf_integer_space(info, max);
}

void	ft_printf_hex(t_pinfo *info)
{
	unsigned int		n;

	n = va_arg(info -> arg, int);
	if (info -> point == 1)
		ft_aux_hex_prc(n, info, 0);
	else if (info -> zero == 1)
		ft_aux_hex_zero(n, info);
	else if (info -> width != 0)
		ft_aux_hex_width(n, info);
	else
	{
		if (info -> hastag == 1 && n != 0)
			info -> alng += write(1, "0x", 2);
		info -> alng += ft_printf_putnbr_base(n, "0123456789abcdef");
	}
}
