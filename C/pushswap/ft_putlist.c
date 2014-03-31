/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/15 13:57:59 by msarr             #+#    #+#             */
/*   Updated: 2013/12/15 14:57:01 by msarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_putlist(t_list *list)
{
	t_list	*tmp;
	
	tmp = list;
	while (tmp)
	{
		ft_putnbr(tmp->i);
		write (1, " ", 1);
		tmp = tmp->next;
	}
	write(1, "\n", 1);
}