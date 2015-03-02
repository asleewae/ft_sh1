/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:54:43 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/06 14:03:11 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t n)
{
	char			*str;
	unsigned int	i;

	if (b)
	{
		i = 0;
		str = (char*)b;
		while (i < n)
		{
			str[i] = (unsigned char)c;
			i++;
		}
		return (b);
	}
	return (NULL);
}
