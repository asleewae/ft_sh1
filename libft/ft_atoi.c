/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:57:28 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/10 10:39:23 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	isneg;

	if (str)
	{
		i = 0;
		nbr = 0;
		isneg = 0;
		while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
			i++;
		if (str[i] == '-')
			isneg = 1, i++;
		else if (str[i] == '+')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
			nbr = nbr * 10 + (str[i++] - '0');
		if (isneg)
			nbr = -nbr;
		return (nbr);
	}
	return (0);
}
