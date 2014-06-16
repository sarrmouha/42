/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozzie <mozzie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/06/04 13:39:31 by msarr             #+#    #+#             */
/*   Updated: 2014/06/08 15:43:55 by mozzie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_42sh.h"

void			aff_env(t_env *env)
{
	while (env)
	{
		ft_putstr(env->name);
		ft_putstr("=");
		ft_putendl(env->arg);
		env = env->next;
	}
}