/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:41:03 by aouhadou          #+#    #+#             */
/*   Updated: 2021/12/03 19:07:55 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *len);
void	ft_putnbr_u(unsigned int nb, int *len);
void	ft_putnbr_x(unsigned int nb, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_putstr(char *str, int *len);
void	ft_hexa_up(unsigned int nb, int *len);
void	ft_print_pointer(unsigned long p, int *len);

#endif
