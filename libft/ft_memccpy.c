/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:52:07 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/05 14:34:48 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
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
			if (ptr2[i] == c)
				return (&ptr1[i + 1]);
			i++;
		}
		return (NULL);
	}
	return (NULL);
}
