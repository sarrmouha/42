/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 21:13:14 by aleger            #+#    #+#             */
/*   Updated: 2013/12/25 13:54:03 by aleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_striter(char *s, void (*f)(char *))
{
	int		i;

	i = 0;
	if (s && f)
	{
		while (*s)
		{
			(*f)(s);
			s++;
		}
	}
}