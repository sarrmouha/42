/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozzie <mozzie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:53:24 by msarr             #+#    #+#             */
/*   Updated: 2014/03/02 17:59:35 by mozzie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (s1 && s2 && *s1 && *s2 && n && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (!n && s1 && s2)
		return (0);
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}
