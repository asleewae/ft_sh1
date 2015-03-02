/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 18:07:16 by asleewae          #+#    #+#             */
/*   Updated: 2015/03/02 20:05:34 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

void	ft_print_env(char **env)
{
	while (env && *env)
	{
		ft_putendl(*env);
		env++;
	}
}

int		ft_var_len(char **args)
{
	int cnt;
	int i;

	cnt = 0;
	if (ft_strcmp(args[1], "-i") == 0)
		i = 2;
	else
		i = 1;
	while(ft_strchr(args[i++], '=') != NULL)
		cnt++;
	return (cnt);
}

char	**ft_var_add(char **args, char **tmp_env, int i, int j)
{
	while(args[i])
	{
		if (ft_strchr(args[i], '=') != NULL)
		{
			tmp_env[j] = ft_strdup(args[i]);
			j++;
		}
		i++;
	}
	return (tmp_env);
}

void	ft_bltin_env(char **env, char **args)
{
	int i;
	int j;
	int tab;
	char **tmp_env;
	
	tmp_env = NULL;
	if (ft_strcmp(args[1], "-i") == 0)
	{
		i = 2;
		j = ft_var_len(args);
		if ((tmp_env = (char **)ft_memalloc(sizeof(char*) * j + 1)) == NULL)
			return ;
		j = 0;
	}
	else
	{
		i = 1;
		j = tab_len(env) + ft_var_len(args);
		if ((tmp_env = (char **)ft_memalloc(sizeof(char*) * j + 1)) == NULL)
			return ;
		tab = 0;
		while (env && *env)
		{
			tmp_env[tab] = *env;
			env++;
			tab++;
		}
		j -= ft_var_len(args);
	}
	tmp_env = ft_var_add(args, tmp_env, i, j);
	/*
	if (args[i + ft_var_len(args)])
	{
		ft_check_cmd(args[i], args, tmp_env);
		//ft_putendl(args[i + ft_var_len(args)]);
		i++;
	}
	else
	*/
	ft_print_env(tmp_env);
}
