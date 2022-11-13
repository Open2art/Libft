/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <rahmane2art@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:22:16 by aamidou           #+#    #+#             */
/*   Updated: 2022/11/12 01:22:16 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int						i;
	int						sign;
	unsigned long int		out;

	i = 0;
	sign = 1;
	out = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (ft_isdigit(str[i]))
	{
		out = out * 10 + (str[i++] - '0');
		if (out > 2147483648 && sign == -1)
			return (0);
		if (out > 2147483647 && sign == 1)
			return (-1);
	}
	return (sign * out);
}
