/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:02:25 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/11 16:07:29 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*new;
	t_list	*prev;

	ret = NULL;
	if (lst && f)
	{
		ret = (*f)(lst);
		prev = ret;
		lst = lst->next;
		while (lst)
		{
			new = (*f)(lst);
			prev->next = new;
			prev = new;
			lst = lst->next;
		}
		prev->next = NULL;
	}
	return (ret);
}
