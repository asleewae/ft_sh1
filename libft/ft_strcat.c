/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 09:51:15 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/05 14:00:47 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	char *ptr1;
	char *ptr2;

	if (dest && src)
	{
		ptr1 = (char*)dest;
		ptr2 = (char*)src;
		while (*ptr1)
			ptr1++;
		while (*ptr2)
		{
			*ptr1 = *ptr2;
			ptr1++;
			ptr2++;
		}
		*ptr1 = '\0';
		return (dest);
	}
	return (NULL);
}
