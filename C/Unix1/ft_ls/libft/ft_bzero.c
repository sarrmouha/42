/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarr <msarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:48:45 by msarr             #+#    #+#             */
/*   Updated: 2014/03/02 13:35:49 by msarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_bzero(void *s, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n)
	{
		*tmp = '\0';
		tmp++;
		n--;
	}
}
