/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:01:07 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/10 11:23:45 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mem;
	char			*str;
	unsigned int	i;

	str = (char*)s;
	if (str && f)
	{
		i = 0;
		if ((mem = (char*)malloc(ft_strlen(str) + 1)) == NULL)
			return (NULL);
		while (str[i])
		{
			mem[i] = (*f)(i, str[i]);
			i++;
		}
		mem[i] = '\0';
		return (mem);
	}
	return (NULL);
}
