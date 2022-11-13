/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <rahmane2art@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:42:26 by aamidou           #+#    #+#             */
/*   Updated: 2022/11/12 01:18:49 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dest_p;
	const char	*src_p;
	size_t		n;
	size_t		len_dst;

	dest_p = dst;
	src_p = src;
	n = size;
	while (n-- != 0 && *dest_p)
		dest_p++;
	len_dst = dest_p - dst;
	n = size - len_dst;
	if (n == 0)
		return (len_dst + ft_strlen(src_p));
	while (*src_p)
	{
		if (n != 1)
		{
			*dest_p++ = *src_p;
			n--;
		}
		src_p++;
	}
	*dest_p = '\0';
	return (len_dst + (src_p - src));
}
