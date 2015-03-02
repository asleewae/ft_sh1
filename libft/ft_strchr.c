/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:37:40 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/10 11:15:19 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	char *tmp;

	if (str)
	{
		tmp = (char*)str;
		while (*tmp)
		{
			if (*tmp == (char)c)
				return (tmp);
			tmp++;
		}
		if ((char)c == 0)
			return (tmp);
	}
	return (NULL);
}
