/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basehexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:58:19 by aniezgod          #+#    #+#             */
/*   Updated: 2022/01/08 16:49:34 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_basehexa(char formatpoint, va_list ap, int *n)
{
	unsigned int	nb;
	unsigned long	ad;

	if (formatpoint == 'x')
	{
		nb = (unsigned int)va_arg(ap, unsigned int);
		ft_putnbr_base((long)nb, "0123456789abcdef", n);
	}
	if (formatpoint == 'X')
	{
		nb = (unsigned int)va_arg(ap, unsigned int);
		ft_putnbr_base((long)nb, "0123456789ABCDEF", n);
	}
	if (formatpoint == 'p')
	{
		ad = (unsigned long)va_arg(ap, unsigned long);
		ft_putstr("0x", n);
		ft_putnbr_address(ad, "0123456789abcdef", n);
	}
}
