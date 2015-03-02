/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 09:34:47 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/10 16:14:32 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char*)s;
	i = 0;
	if (ptr)
		while (i < n)
		{
			if (ptr[i] == (unsigned char)c)
				return (&ptr[i]);
			++i;
		}
	return (NULL);
}
