/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsetenv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 18:07:16 by asleewae          #+#    #+#             */
/*   Updated: 2015/03/02 15:28:54 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

void	ft_bltin_unsetenv_cut(char **env, char *args)
{
	(void)env;
	(void)args;
}

void	ft_bltin_unsetenv(char **env, char **args)
{
	int i;

	i = 0;
	while (args[i])
	{
		ft_bltin_unsetenv_cut(env, args[i]);
	}
}