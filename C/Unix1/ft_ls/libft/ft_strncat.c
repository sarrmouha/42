/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarr <msarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 15:13:48 by msarr             #+#    #+#             */
/*   Updated: 2014/03/02 14:12:53 by msarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strncat(char *s1, char *s2, size_t n)
{
	int		i;

	i = ft_strlen(s1);
	while (*s2 && n)
	{
		s1[i] = *s2++;
		i++;
		n--;
	}
	s1[i] = '\0';
	return (s1);
}
