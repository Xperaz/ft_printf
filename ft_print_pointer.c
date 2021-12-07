/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:03:59 by aouhadou          #+#    #+#             */
/*   Updated: 2021/12/03 19:05:26 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_adress(unsigned long nb, int *len)
{
	char	tmp;

	if (nb != 0)
	{
		ft_print_adress(nb / 16, len);
		if (nb % 16 < 10)
			tmp = nb % 16 + 48;
		else
			tmp = (nb % 16) - 10 + 'a';
		ft_putchar(tmp, len);
	}
}

void	ft_print_pointer(unsigned long p, int *len)
{
	ft_putstr("0x", len);
	if (p == 0)
		ft_putchar('0', len);
	else
		ft_print_adress((unsigned long int)p, len);
}
