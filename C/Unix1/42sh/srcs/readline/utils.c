/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 15:12:00 by msarr             #+#    #+#             */
/*   Updated: 2014/12/28 03:04:46 by msarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "getline.h"
#include "42sh.h"

int			ft_init(t_termios *term)
{
	char	*termname;

	if ((termname = getenv("TERM")) == NULL)
		return (-1);
	if (tgetent(NULL, termname) == ERR)
		return (-1);
	if (tcgetattr(0, term) == -1)
		return (-1);
	return (0);
}

int			ft_config(t_termios *term)
{
	(*term).c_lflag &= ~(ICANON);
	(*term).c_lflag &= ~(ECHO);
	(*term).c_cc[VMIN] = 1;
	(*term).c_cc[VTIME] = 0;
	if (tcsetattr(0, TCSADRAIN, term) == -1)
		return (-1);
	return (0);
}

int			ft_defconfig(t_termios *term)
{
	(*term).c_lflag = (ICANON | ECHO);
	if (tcsetattr(0, TCSADRAIN, term) == -1)
		return (-1);
	return (0);
}

int			print(char *str, int j, char *buf)
{
	(void)buf;
	ft_putstr(tgetstr("rc", NULL));
	ft_putstr(tgetstr("cd", NULL));
	ft_putstr(str);
	while (j--)
		ft_putstr(tgetstr("le", NULL));
	return (1);
}
