/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 18:11:21 by asleewae          #+#    #+#             */
/*   Updated: 2015/02/27 11:14:25 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

char	*ft_get_env(char **env, char *var)
{
	int	i;
	char	*pos;
	char	tc;

	if (!env)
		return (NULL);
	i = 0;
	while (env[i])
	{
		if ((pos = ft_strchr(env[i], '=')))
		{
			tc = *pos;
			*pos = 0;
			if (!ft_strcmp(var, env[i]))
			{
				*pos = tc;
				return (pos + 1);
			}
			*pos = tc;
			++i;
		}
	}
	return (NULL);
}