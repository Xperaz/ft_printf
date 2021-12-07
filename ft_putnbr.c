/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:08:10 by aouhadou          #+#    #+#             */
/*   Updated: 2021/12/03 19:08:46 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *len)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar((nb + 48), len);
	}
	else if (nb < 0)
	{
		if (nb == -2147483648)
		{
			ft_putchar('-', len);
			ft_putstr("2147483648", len);
		}
		else
		{
			ft_putchar('-', len);
			ft_putnbr((nb * (-1)), len);
		}
	}
	else
	{
		ft_putnbr((nb / 10), len);
		ft_putnbr((nb % 10), len);
	}
}
