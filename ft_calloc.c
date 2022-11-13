/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <rahmane2art@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:23:05 by aamidou           #+#    #+#             */
/*   Updated: 2022/11/10 01:18:32 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*temp;

	if (count != 0 && count * size / count != size)
		return (0);
	temp = malloc(count * size);
	if (!temp)
		return (0);
	ft_bzero(temp, count * size);
	return (temp);
}
