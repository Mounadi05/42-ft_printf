/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:39:03 by amounadi          #+#    #+#             */
/*   Updated: 2021/11/13 23:37:23 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_countup(int nbr, int *a)
{	
	unsigned int		n;
	char				*base;

	base = "0123456789ABCDEF";
	n = nbr;
	if (n >= 16)
	{
		(*a)++;
		ft_countup(n / 16, a);
		ft_putchar(base[n % 16]);
	}
	else
	{
		(*a)++;
		ft_putchar(base[n]);
	}
}

int	ft_puthexupper(int nbr)
{
	int	a;

	a = 0;
	ft_countup(nbr, &a);
	return (a);
}
