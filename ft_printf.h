/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:30:53 by aniezgod          #+#    #+#             */
/*   Updated: 2022/01/08 16:52:58 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_basehexa(char formatpoint, va_list ap, int *n);
void	ft_baseten(char formatpoint, va_list ap, int *n);
void	ft_char(char formatpoint, va_list ap, int *n);
void	ft_putchar(char c, int *n);
void	ft_putstr(char *str, int *n);
int		ft_printf(const char *format, ...);
int		ft_strlen(char *str);
void	ft_putnbr_base(long nbr, char *base, int *n);
void	ft_putnbr_address(unsigned long nbr, char *base, int *n);

#endif
