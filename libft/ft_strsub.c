/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 09:17:46 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/11 16:24:56 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*ret;
	unsigned int	c;

	if (!(ret = ft_strnew(len)) || !s)
		return (NULL);
	str = (char *)s;
	c = 0;
	while (c < len)
	{
		ret[c] = str[start];
		start++;
		c++;
	}
	return (ret);
}
