/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:28:26 by emtran            #+#    #+#             */
/*   Updated: 2021/06/11 13:58:54 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include "get_next_line.h"

/*# define BUFF_SIZE 150*/

int	get_next_line(int fd, char **line);

size_t	ft_strlen(char *str);
char	*ft_strnew(size_t size);
char	*ft_strdup(char *src);
char	*ft_strjoin(char *s1, char *s2);
void    *ft_memcpy(void *dest, const void *src, size_t count);

#endif
