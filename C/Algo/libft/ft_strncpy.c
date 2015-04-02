/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozzie <mozzie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 14:28:18 by msarr             #+#    #+#             */
/*   Updated: 2014/03/02 14:10:40 by mozzie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strncpy(char *s1, char *s2, size_t n)
{
	int		i;

	i = 0;
	while (n && s2[i])
	{
		s1[i] = s2[i];
		i++;
		n--;
	}
	while (n)
	{
		s1[i] = '\0';
		n--;
		i++;
	}
	return (s1);
}
