/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:50:59 by aouhadou          #+#    #+#             */
/*   Updated: 2021/12/03 19:01:09 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(char c, va_list args, int *len)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), len);
	if (c == 'c')
		ft_putchar(va_arg(args, int), len);
	if (c == 's')
		ft_putstr(va_arg(args, char *), len);
	if (c == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), len);
	if (c == 'x')
		ft_putnbr_x(va_arg(args, unsigned int), len);
	if (c == 'X')
		ft_hexa_up(va_arg(args, unsigned int), len);
	if (c == '%')
		ft_putchar('%', len);
	if (c == 'p')
		ft_print_pointer(va_arg(args, unsigned long int), len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			ft_check(format[i + 1], args, &len);
			i++;
		}
		else
			ft_putchar(format[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}
