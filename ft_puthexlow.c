/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:59:55 by amounadi          #+#    #+#             */
/*   Updated: 2021/11/13 23:37:35 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_countlow(int nbr, int *a)
{	
	unsigned int		n;
	char				*base;

	base = "0123456789abcdef";
	n = nbr;
	if (n >= 16)
	{
		(*a)++;
		ft_countlow(n / 16, a);
		ft_putchar(base[n % 16]);
	}
	else
	{
		(*a)++;
		ft_putchar(base[n]);
	}
}

int	ft_puthexlow(int nbr)
{
	int	a;

	a = 0;
	ft_countlow(nbr, &a);
	return (a);
}
