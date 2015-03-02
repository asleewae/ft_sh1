/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:14:30 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/10 13:59:33 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_end(char const *s, size_t len)
{
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
		len--;
	return (len + 1);
}

static size_t	ft_begin(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	char	*ret;
	size_t	start;
	size_t	end;
	size_t	len;

	if (s)
	{
		len = ft_strlen(s);
		if (len == 0)
			return (ret = ft_strnew(1));
		start = ft_end(s, len - 1);
		end = ft_begin(s);
		if (end == len)
			return (ret = ft_strnew(1));
		len = len - ((len - start) + (len - (len - end)));
		if ((ret = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
			return (NULL);
		ret = ft_strsub(s, end, len);
		return (ret);
	}
	return (NULL);
}
