/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <rahmane2art@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 05:39:50 by aamidou           #+#    #+#             */
/*   Updated: 2022/11/12 00:43:14 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	if (!haystack && len == 0)
		return (0);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		if (haystack[i] == needle[0])
		{
			while (haystack[i + j] == needle[j] && needle[j] && (i + j) < len)
				j++;
			if (!needle[j])
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
