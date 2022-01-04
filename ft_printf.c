/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:33:45 by aniezgod          #+#    #+#             */
/*   Updated: 2022/01/04 18:29:40 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf(const char *format,...)
{
	va_list ap;
	va_start (ap, format);

	if (!format)
		return (-1);
	while (*format)
	{
		if (*format != '%')
			ft_putchar(*format);
		else
		{
			format++;
			if (*format == 'c' || *format == 's' || *format == '%')
				ft_char(*format, ap);
			else if (*format == 'x' || *format == 'p')
				ft_basehexa(*format, ap);
			else if (*format == 'd' || *format == 'i' || *format == 'u')
				ft_baseten(*format, ap);
		//	else
				/* I don't know */
		}
		format++;
	}
	va_end (ap);
	//valeur retour de printf ?
}