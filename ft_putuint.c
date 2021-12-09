/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:13:40 by amounadi          #+#    #+#             */
/*   Updated: 2021/11/13 23:41:00 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	void	ft_ncount(unsigned int nb, int *a)
{
	if (nb > 9)
	{
		(*a)++;
		ft_ncount(nb / 10, a);
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		(*a)++;
		ft_putchar(nb + '0');
	}
}

int	ft_putuint(unsigned int nb)
{
	int	a;

	a = 0;
	ft_ncount(nb, &a);
	return (a);
}
