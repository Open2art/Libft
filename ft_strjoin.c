/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <rahmane2art@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:47:24 by aamidou           #+#    #+#             */
/*   Updated: 2022/11/05 18:35:14 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*out;

	if (!s1 || !s2)
		return (0);
	out = ft_calloc(sizeof(char ), (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!out)
		return (0);
	i = 0;
	while (*(s1 + i))
	{
		*(out + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (*(s2 + j))
	{
		*(out + i + j) = *(s2 + j);
		j++;
	}
	*(out + i + j) = 0;
	return (out);
}
