/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <rahmane2art@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:30:54 by aamidou           #+#    #+#             */
/*   Updated: 2022/11/05 14:05:31 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_putnbr(long n, char *s, int *i)
{
	if (n > 9)
	{
		ft_putnbr(n / 10, s, i);
		ft_putnbr(n % 10, s, i);
	}
	else
		s[(*i)++] = n + '0';
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*out;

	nb = n;
	out = malloc(sizeof(char) * (ft_nbrlen(nb) + 1));
	if (!out)
		return (0);
	i = 0;
	if (nb < 0)
	{
		out[i++] = '-';
		nb *= -1;
	}
	ft_putnbr(nb, out, &i);
	out[i] = 0;
	return (out);
}
