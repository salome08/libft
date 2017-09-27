/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:11:36 by nrandria          #+#    #+#             */
/*   Updated: 2016/02/22 15:26:54 by nrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_push_back(t_list **list, void *content, size_t content_size)
{
	t_list	*tmp;

	tmp = *list;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_create_elem(content, content_size);
	}
	else
		*list = ft_create_elem(content, content_size);
}
