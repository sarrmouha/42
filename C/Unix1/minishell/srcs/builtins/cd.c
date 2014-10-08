/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozzie <mozzie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/23 19:03:35 by sraccah           #+#    #+#             */
/*   Updated: 2014/10/08 18:38:39 by msarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell1.h"

static int			s_setenv(t_env **envs, char *name, char **arg)
{
	t_env			*envc;
	char			**args;

	envc = *envs;
	args = arg;
	if (envc)
	{
		if (args && args[0])
		{
			while (envc && envc->next && ft_strcmp(envc->name, name))
				envc = envc->next;
			if (!ft_strcmp(envc->name, name))
				envc->arg = ft_strdup(args[0]);
			return (EXIT_SUCCESS);
		}
	}
	return (EXIT_FAILURE);
}

int					cd(t_shell *shell)
{
	t_env			*envs;
	char			**av;
	char			*pwd;

	envs = shell->env;
	av = shell->cmd;
	pwd = get_env(envs, "PWD");
	if (av[1] == NULL || !ft_strcmp(av[1], "~") || !ft_strcmp(av[1], "~/"))
		av[1] = get_env(envs, "HOME");
	else if (!ft_strcmp(av[1], "-"))
		av[1] = get_env(envs, "OLDPWD");
	if (chdir(av[1]) == -1)
		ft_putendl(": cd : No such file or directory.");
	else
	{
		s_setenv(&envs, "OLDPWD", &pwd);
		s_setenv(&envs, "PWD", &av[1]);
	}
	return (EXIT_SUCCESS);
}