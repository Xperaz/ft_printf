/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:09:00 by aouhadou          #+#    #+#             */
/*   Updated: 2021/12/03 19:10:00 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_x1(unsigned int nb, int *len)
{
	char		tmp;

	if (nb != 0)
	{
		ft_putnbr_x1(nb / 16, len);
		if (nb % 16 < 10)
			tmp = nb % 16 + 48;
		else
			tmp = (nb % 16) - 10 + 'a';
		ft_putchar(tmp, len);
	}
}

void	ft_putnbr_x(unsigned int nb, int *len)
{
	if (nb == 0)
		ft_putchar('0', len);
	else
	{
		ft_putnbr_x1(nb, len);
	}
}
