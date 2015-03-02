/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:18:53 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/05 15:13:46 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	if (dest && src)
	{
		ptr1 = (char*)dest;
		ptr2 = (char*)src;
		i = 0;
		while (*ptr1)
			ptr1++;
		while (*ptr2 && i < n)
		{
			*ptr1 = *ptr2;
			ptr1++;
			ptr2++;
			i++;
		}
		*ptr1 = '\0';
		return (dest);
	}
	return (NULL);
}
