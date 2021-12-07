/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_up_hexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:52:53 by aouhadou          #+#    #+#             */
/*   Updated: 2021/12/03 18:55:26 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa_up1(unsigned int nb, int *len)
{
	char		tmp;

	if (nb != 0)
	{
		ft_hexa_up1(nb / 16, len);
		if (nb % 16 < 10)
			tmp = nb % 16 + 48;
		else
			tmp = (nb % 16) - 10 + 'A';
		ft_putchar(tmp, len);
	}
}

void	ft_hexa_up(unsigned int nb, int *len)
{
	if (nb == 0)
		ft_putchar('0', len);
	else
	{
		ft_hexa_up1(nb, len);
	}
}
