/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:13:40 by amounadi          #+#    #+#             */
/*   Updated: 2021/11/13 23:38:57 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	void	ft_count(int nb, int *a)
{
	unsigned int	n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
		(*a)++;
	}
	if (n > 9)
	{
		(*a)++;
		ft_count(n / 10, a);
		ft_putchar((n % 10) + '0');
	}
	else
	{
		(*a)++;
		ft_putchar(n + '0');
	}
}

int	ft_putint(int nb)
{
	int	a;

	a = 0;
	ft_count(nb, &a);
	return (a);
}
