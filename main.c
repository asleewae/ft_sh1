/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 11:49:12 by asleewae          #+#    #+#             */
/*   Updated: 2015/03/02 19:45:04 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

void	ft_exec(char *path, char **av, char **env)
{
	if (fork() == 0)
		execve(path, av, env);
	else
		wait(NULL);
}

char	*ft_get_var(char **env, char *var)
{
	int var_len;

	var_len = ft_strlen(var);
	while (*env)
	{
		if (ft_strncmp(*env, var, var_len) == 0)
			return (*env + var_len);
		env++;
	}
	return (NULL);
}

void	ft_check_cmd(char *args, char **av, char **env)
{
	char **paths;
	char *path;

	paths = ft_strsplit(ft_get_var(env, "PATH="), ':');
	while (*paths)
	{
		path = ft_strjoin(ft_strjoin(*paths, "/"), args);
		if (access(path, X_OK) == 0)
			ft_exec(path, av, env);
		paths++;
	}
}

int		main(int ac, char **av, char **ev)
{
	(void)ac;
	(void)av;
	
	char **args;
	char *line;
	while (42)
	{
		ft_putstr("$> ");
		get_next_line(1, &line);
		args = ft_strsplit(line, ' ');
		if (ft_strcmp(args[0], "cd") == 0)
			ft_bltin_cd(args[1]);
		else if (ft_strcmp(args[0], "env") == 0)
			ft_bltin_env(ev, args);
		else if (ft_strcmp(args[0], "setenv") == 0)
			ft_bltin_setenv(ev, args);
		else if (ft_strcmp(args[0], "exit") == 0)
			ft_bltin_exit();
		else
			ft_check_cmd(args[0], args, ev);
	}
	return (0);
}
