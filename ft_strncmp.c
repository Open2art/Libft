/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <rahmane2art@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:49:10 by aamidou           #+#    #+#             */
/*   Updated: 2022/11/06 00:48:34 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] && str2[i] && (str1[i] == str2[i]) && i < n)
		i++;
	if (i == n)
		i--;
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}
