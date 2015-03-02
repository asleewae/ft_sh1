/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:52:07 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/10 10:50:37 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	unsigned char	*tmp;

	if (dest && src)
	{
		ptr1 = (unsigned char*)dest;
		ptr2 = (unsigned char*)src;
		if ((tmp = (unsigned char*)malloc(sizeof(unsigned char*) * n)) == NULL)
			return (NULL);
		i = 0;
		while (i < n)
			tmp[i] = ptr2[i], i++;
		i = 0;
		while (i < n)
			ptr1[i] = tmp[i], i++;
		free(tmp);
		return (dest);
	}
	return (NULL);
}
