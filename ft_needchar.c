/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_needchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:29:57 by aniezgod          #+#    #+#             */
/*   Updated: 2022/01/08 16:46:52 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putchar(char c, int *n)
{
	write(1, &c, 1);
	*n = *n + 1;
}

void	ft_putstr(char *str, int *n)
{
	while (*str)
	{
		ft_putchar(*str, n);
		str++;
	}
}
