/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptintf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhabacuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:06:55 by lhabacuc          #+#    #+#             */
/*   Updated: 2024/05/22 10:06:58 by lhabacuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *i)
{
	write(1, &c, 1);
	(*i)++;
}

void	ft_putstr(const char *s, int *i)
{
	int	c;

	c = 0;
	if (s == NULL)
		ft_putstr("(null)", i);
	else
	{
		while (s[c] != '\0')
		{
			ft_putchar(s[c], i);
			c++;
		}
	}
}

void	ft_what(const char *s, va_list listmap, int *i)
{
	if (*s == '%')
		ft_putchar(*s, i);
	else if (*s == 's')
		ft_putstr(va_arg(listmap, char *), i);
	else if (*s == 'c')
		ft_putchar(va_arg(listmap, int), i);
	else if (*s == 'd' || *s == 'i')
		ft_putnbr(va_arg(listmap, int), i);
	else if (*s == 'u')
		ft_put(va_arg(listmap, unsigned int), i);
	else if (*s == 'x')
		ft_hex(va_arg(listmap, unsigned int), 0, i);
	else if (*s == 'X')
		ft_hex(va_arg(listmap, unsigned int), 1, i);
	else if (*s == 'p')
		ft_ptr(va_arg(listmap, void *), i);
}

int	ft_printf(const char *l, ...)
{
	int		total_de_peixes;
	va_list	listmap;

	total_de_peixes = 0;
	va_start(listmap, l);
	while (*l)
	{
		if (*l == '%')
			ft_what(++l, listmap, &total_de_peixes);
		else
			ft_putchar(*l, &total_de_peixes);
		l++;
	}
	va_end(listmap);
	return (total_de_peixes);
}
