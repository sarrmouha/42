/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozzie <mozzie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 10:29:41 by msarr             #+#    #+#             */
/*   Updated: 2014/06/02 15:56:12 by mozzie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H_
# define PARSER_H_

# include "libft.h"
# include "my_42sh.h"

typedef struct	 		s_lexlist
{
	char				*str;
	struct s_lexlist	*next;
	struct s_lexlist	*prev;
}						t_lexlist;

t_lexlist			*addlist(t_lexlist *list, char *str);

#endif
