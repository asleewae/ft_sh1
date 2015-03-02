/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:45:23 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/10 11:21:46 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ret;
	char	*s;

	s = (char*)src;
	if (dst && src)
	{
		ret = ft_strlen(s);
		i = 0;
		j = 0;
		while (dst[i] && i < size)
			i++;
		if (size > 0)
			while (i < size - 1 && src[j])
				dst[i++] = s[j++];
		if (j > 0)
		{
			dst[i] = 0;
			return (ret + i - j);
		}
		return (ret + i);
	}
	return (0);
}
