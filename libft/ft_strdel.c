/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 18:20:56 by asleewae          #+#    #+#             */
/*   Updated: 2014/11/10 11:17:57 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_strdel(char **as)
{
	if (as && *as)
	{
		ft_memdel((void**)as);
	}
}