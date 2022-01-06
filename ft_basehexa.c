/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basehexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:58:19 by aniezgod          #+#    #+#             */
/*   Updated: 2022/01/06 22:44:03 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_basehexa(char formatpoint, va_list ap, int *n)
{
	int	nb;
	long ad;

	if (formatpoint == 'x')
	{
		nb = (int)va_arg(ap, int);
		ft_putnbr_base((long)nb, "0123456789ABCDEF", n);
	}
	if (formatpoint == 'p')
	{
		ad = (unsigned long)va_arg(ap, unsigned long);
		ft_putnbr_base(ad, "0123456789ABCDEF", n);
	}
}
