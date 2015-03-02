/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 10:17:08 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/10 13:56:33 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdupc(const char *s1, char c)
{
	char	*ret;

	ret = NULL;
	if (s1)
	{
		if ((ret = (char*)malloc(ft_strlenc(s1, c) + 1)) == NULL)
			return (NULL);
		ft_strcpyc(ret, s1, c);
	}
	return (ret);
}
