/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:02:18 by aouhadou          #+#    #+#             */
/*   Updated: 2021/12/03 19:02:56 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int nb, int *len)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar((nb + 48), len);
	}
	else
	{
		ft_putnbr_u((nb / 10), len);
		ft_putnbr_u((nb % 10), len);
	}
}
