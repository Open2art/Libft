/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <rahmane2art@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:34:48 by aamidou           #+#    #+#             */
/*   Updated: 2022/11/12 01:27:26 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*dst;

	if (!s || !f)
		return (0);
	dst = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dst)
		return (0);
	i = 0;
	while (*(s + i))
	{
		*(dst + i) = (*f)(i, *(s + i));
		i++;
	}
	*(dst + i) = 0;
	return (dst);
}
