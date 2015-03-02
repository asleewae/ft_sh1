/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:50:59 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/10 11:28:43 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*tmp1;
	char	*tmp2;

	if (s1 && s2)
	{
		tmp1 = (char*)s1;
		tmp2 = (char*)s2;
		i = 0;
		j = 0;
		if (s2[0] == '\0')
			return (tmp1);
		while (tmp1[i] && i < n)
		{
			if (tmp1[i] == tmp2[j])
				j++;
			else
				j = 0;
			if (tmp2[j] == '\0')
				return (&tmp1[i - j + 1]);
			i++;
		}
	}
	return (NULL);
}
