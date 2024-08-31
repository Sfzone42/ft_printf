/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funte.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhabacuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:08:41 by lhabacuc          #+#    #+#             */
/*   Updated: 2024/05/22 10:08:44 by lhabacuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *i)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", i);
	else if (n < 0)
	{
		ft_putchar('-', i);
		n = -n;
		ft_putnbr(n, i);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, i);
		ft_putchar((n % 10) + 48, i);
	}
	else
		ft_putchar(n + 48, i);
}

void	ft_put(unsigned int nb, int *i)
{
	if (nb > 9)
		ft_putnbr(nb / 10, i);
	ft_putchar(nb % 10 + 48, i);
}

void	ft_hex(unsigned long long nbr, int i, int *l)
{
	if (nbr >= 16)
		ft_hex((nbr / 16), i, l);
	if (i == 0)
		ft_putchar("0123456789abcdef"[nbr % 16], l);
	else
		ft_putchar("0123456789ABCDEF"[nbr % 16], l);
}

void	ft_ptr(void *p, int *i)
{
	unsigned long	pont;

	pont = (unsigned long)p;
	if (!p)
		ft_putstr("(nil)", i);
	else
	{
		ft_putstr("0x", i);
		ft_hex(pont, 0, i);
	}
}
