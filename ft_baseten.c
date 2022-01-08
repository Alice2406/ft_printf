/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_baseten.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:58:14 by aniezgod          #+#    #+#             */
/*   Updated: 2022/01/08 16:09:54 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void  ft_baseten(char formatpoint, va_list ap, int *n)
{
    int nb;
    long long nbr;

    if (formatpoint == 'd' || formatpoint == 'i')
    {
        nb = (int)va_arg(ap, int);
        ft_putnbr_base((long)nb, "0123456789", n);
    }
    if (formatpoint == 'u')
    {
        nbr = (unsigned int)va_arg(ap, unsigned int);
        ft_putnbr_base(nbr, "0123456789", n);
    }
}
