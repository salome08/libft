/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 16:35:40 by nrandria          #+#    #+#             */
/*   Updated: 2016/02/20 20:27:40 by nrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include "libft.h"

# define BUFF_SIZE 32

int					get_next_line(int const fd, char **line);

typedef struct		s_gnl
{
	int				fd;
	int				ret;
	int				i;
	char			*s;
	char			*tmp;
	char			**l;
	char			buf[BUFF_SIZE + 1];
	struct s_gnl	*next;
}					t_gnl;

#endif
