/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 09:32:46 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/10 10:47:32 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	i = 0;
	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	if (ptr1 && ptr2)
	{
		while (i < n && ptr1[i] == ptr2[i])
			i++;
		if (i == n)
			return (0);
		return ((int)(ptr1[i] - ptr2[i]));
	}
	return (-1);
}
