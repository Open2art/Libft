/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <rahmane2art@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:31:10 by aamidou           #+#    #+#             */
/*   Updated: 2022/11/11 21:59:21 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*copy;

	if (lst && del)
	{
		while (*lst)
		{
			copy = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = copy;
		}
	}
}
