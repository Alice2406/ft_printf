/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:03:42 by aniezgod          #+#    #+#             */
/*   Updated: 2022/01/08 16:54:14 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_char(char formatpoint, va_list ap, int *n)
{
	char	c;
	char	*str;

	if (formatpoint == 'c')
	{
		c = (char)va_arg(ap, int);
		ft_putchar(c, n);
	}
	else if (formatpoint == 's')
	{
		str = (char *)va_arg(ap, char *);
		if (!str)
			ft_putstr("(null)", n);
		else
			ft_putstr(str, n);
	}
	else if (formatpoint == '%')
		ft_putchar('%', n);
}
