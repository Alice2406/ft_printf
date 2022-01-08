/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_address.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:47:07 by aniezgod          #+#    #+#             */
/*   Updated: 2022/01/08 16:46:36 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_address(unsigned long nbr, char *base, int *n)
{
	unsigned int	size;

	size = ft_strlen(base);
	if (nbr >= size)
	{
		ft_putnbr_address(nbr / size, base, n);
		ft_putnbr_address(nbr % size, base, n);
	}
	else
		ft_putchar(base[nbr], n);
}
