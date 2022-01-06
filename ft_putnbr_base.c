/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 01:36:47 by aniezgod          #+#    #+#             */
/*   Updated: 2022/01/06 21:47:47 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);

}

void	ft_putnbr_base(long nbr, char *base, int *n)
{
	int size;

	size = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-',n);
		nbr *= (-1);
	}
	if(nbr > size)
	{
		ft_putnbr_base(nbr / size, base, n);
		ft_putnbr_base(nbr % size, base, n);
	}
	else
		ft_putchar(base[nbr], n);
}
