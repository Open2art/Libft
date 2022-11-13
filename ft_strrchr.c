/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <rahmane2art@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 03:26:23 by aamidou           #+#    #+#             */
/*   Updated: 2022/11/06 00:35:05 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*temp;

	i = 0;
	temp = 0;
	while (s[i])
	{
		if (((char *)s)[i] == (char )c)
			temp = &((char *)s)[i];
		i++;
	}
	if ((char )c == '\0')
		return (&((char *)s)[i]);
	return (temp);
}
