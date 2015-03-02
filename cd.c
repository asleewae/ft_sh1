/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 17:17:46 by asleewae          #+#    #+#             */
/*   Updated: 2015/02/23 17:51:44 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include "ft_sh1.h"

void	ft_bltin_cd(char *dir)
{
	struct stat st;

	if (lstat(dir, &st) == -1)
		ft_putstr_fd("cd: no such file or directory: ", 2)
			, ft_putendl_fd(dir, 2);
	else if (!S_ISDIR(st.st_mode) && !S_ISLNK(st.st_mode))
		ft_putstr_fd("cd: not a directory: ", 2)
			, ft_putendl_fd(dir, 2);
	else if (!(st.st_mode & S_IXUSR) && !(st.st_mode & S_IXGRP)
			&& !(st.st_mode & S_IXOTH))
		ft_putstr_fd("cd: permission denied: ", 2)
			, ft_putendl_fd(dir, 2);
	else
		if (chdir(dir) == -1)
			ft_putstr_fd("cd: not a directory: ", 2)
				, ft_putendl_fd(dir, 2);
}