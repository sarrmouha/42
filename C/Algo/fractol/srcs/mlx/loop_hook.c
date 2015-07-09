/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_hook.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 15:56:52 by msarr             #+#    #+#             */
/*   Updated: 2015/04/18 15:56:54 by msarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		loop_hook(t_env *env)
{
	render(env);
	mlx_put_image_to_window(env->ptr, env->win, env->img, 0, 0);
	printf("Fractol : iter :  %lu, zoom : %Lf\n", env->max_i, env->zoom);
	return (0);
}