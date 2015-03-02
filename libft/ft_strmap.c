/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 09:45:40 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/10 11:23:03 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strmap(char const *s, char (*f)(char))
{
	char	*mem;
	char	*str;
	int		i;

	str = (char*)s;
	if (str && f)
	{
		i = 0;
		if ((mem = (char*)malloc(ft_strlen(str) + 1)) == NULL)
			return (NULL);
		while (str[i])
		{
			mem[i] = (*f)(str[i]);
			i++;
		}
		mem[i] = '\0';
		return (mem);
	}
	return (NULL);
}
