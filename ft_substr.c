/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <rahmane2art@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:41:41 by aamidou           #+#    #+#             */
/*   Updated: 2022/11/05 14:56:53 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
	{
		out = malloc(sizeof(char));
		if (!out)
			return (0);
		out[0] = 0;
		return (out);
	}
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return (0);
	i = -1;
	while (++i < len)
		*(out + i) = *(s + start + i);
	*(out + i) = 0;
	return (out);
}
