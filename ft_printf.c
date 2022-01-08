/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:33:45 by aniezgod          #+#    #+#             */
/*   Updated: 2022/01/08 12:36:28 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_printf(const char *format,...)
{
	va_list ap;
	va_start (ap, format);
	int n;

	n = 0;
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format != '%')
			ft_putchar(*format, &n);
		else
		{
			format++;
			if (*format == 'c' || *format == 's' || *format == '%')
				ft_char(*format, ap, &n);
			else if (*format == 'x' || *format == 'p')
				ft_basehexa(*format, ap, &n);
			else if (*format == 'd' || *format == 'i' || *format == 'u')
				ft_baseten(*format, ap, &n);
		}
		format++;
	}
	va_end (ap);
	return (n);
}
#include <stdio.h>
int main()
{
	ft_printf("%c%c%c", '0', 0, '1');
	printf ("\n");
	printf("%c%c%c\n", '0', 0, '1');
}
