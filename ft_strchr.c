/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <rahmane2art@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:08:25 by aamidou           #+#    #+#             */
/*   Updated: 2022/11/09 22:43:59 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (((char *)s)[i] == (char )c)
			return (&((char *)s)[i]);
		i++;
	}
	if ((char )c == '\0')
		return (&((char *)s)[i]);
	return (0);
}
