/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:25:15 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/10 10:45:18 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenitoa(unsigned int n, unsigned int len)
{
	if (n >= 10)
	{
		len = ft_lenitoa(n / 10, len);
		len++;
	}
	else
		len++;
	return (len);
}

char		*ft_itoa(int n)
{
	unsigned int	len;
	char			*ret;
	unsigned int	nn;

	len = n < 0 ? 1 : 0;
	len = ft_lenitoa(n < 0 ? -n : n, len);
	ret = ft_strnew(len);
	ret[len] = '\0';
	if (n < 0)
	{
		ret[0] = '-';
		nn = -n;
	}
	else
		nn = n;
	while (len-- > 0 && ret && ret[len] != '-')
	{
		ret[len] = '0' + (nn % 10);
		nn /= 10;
	}
	return (ret);
}
