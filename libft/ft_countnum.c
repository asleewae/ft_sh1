/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 14:37:36 by asleewae           #+#    #+#            */
/*   Updated: 2014/11/24 15:17:02 by asleewae          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countnum(int n)
{
	int b;

	b = 0;
	if (n <= 9)
		b = 1;
	if (n >= 10)
	{
		while (n > 0)
		{
			n = n / 10;
			b++;
		}
	}
	return (b);
}
