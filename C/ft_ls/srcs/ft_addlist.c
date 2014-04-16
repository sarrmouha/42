/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/15 22:00:35 by msarr             #+#    #+#             */
/*   Updated: 2013/12/15 22:00:39 by msarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lsft.h"

t_dirlist		*ft_addlist(t_dirlist *list, char *str, char *atime)
{
	t_dirlist  *tmp;
	
	tmp = (t_dirlist *)malloc(sizeof(t_dirlist));
	tmp->str = ft_strdup(str);
	tmp->atime = ft_strdup(atime);
	tmp->next = list;
	return (tmp);
}
