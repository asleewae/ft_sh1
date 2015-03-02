/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:13:52 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/06 16:56:57 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	ptr1 = dst;
	ptr2 = (char*)src;
	i = 0;
	if (ptr1 && ptr2)
	{
		while (i < n && ptr2[i])
		{
			ptr1[i] = ptr2[i];
			i++;
		}
		while (i < n)
		{
			ptr1[i] = '\0';
			i++;
		}
	}
	return (dst);
}
