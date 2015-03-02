/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpyc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 10:17:08 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/10 13:56:15 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpyc(char *dst, const char *src, char c)
{
	char	*tsrc;
	char	*tdst;

	tdst = dst;
	tsrc = (char*)src;
	if (tsrc && tdst)
	{
		while (*tsrc != c)
			*tdst++ = *tsrc++;
		*tdst = 0;
	}
	return (dst);
}
