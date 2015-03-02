/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh1.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asleewae <asleewae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 16:32:41 by asleewae          #+#    #+#             */
/*   Updated: 2015/03/02 18:37:46 by asleewae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SH1_H
# define FT_SH1_H

# include "libft/includes/libft.h"
# include "getnextline.h"
# include <unistd.h>
# include <stdio.h>
# include <sys/wait.h>
# include <signal.h>

typedef struct		s_sh1
{
	char			**env;
	char			**tmp;
}					t_sh1;

int					get_next_line(int const fd, char **line);
void				ft_check_cmd(char *args, char **av, char **env);
char				*ft_get_env(char **env, char *var);
void				ft_bltin_cd(char *dir);
void				ft_bltin_env(char **env, char **args);
void				ft_bltin_setenv(char **env, char **args);
void				ft_bltin_unsetenv(char **env, char **args);
void				ft_bltin_exit(void);
int					tab_len(char **tab);

#endif
