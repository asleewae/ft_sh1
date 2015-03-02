/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:23:03 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/06 17:06:53 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char			*ret;
	char			ch;
	unsigned int	i;
	int				j;

	ret = (char *)s;
	ch = (char)c;
	i = 0;
	j = -1;
	while (i < (ft_strlen(ret) + 1))
	{
		if (ret[i] == ch)
		{
			j = (int)i;
		}
		i++;
	}
	if (j != -1)
		return (&ret[j]);
	return (NULL);
}
