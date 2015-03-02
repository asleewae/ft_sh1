/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:52:07 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/07 18:12:35 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (dest && src)
	{
		ptr1 = (unsigned char*)dest;
		ptr2 = (unsigned char*)src;
		i = 0;
		while (i < n)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
		return (dest);
	}
	return (NULL);
}
