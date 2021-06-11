/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 13:53:24 by emtran            #+#    #+#             */
/*   Updated: 2021/06/11 17:23:04 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stdio.h>

static char	*ft_pushdanstaline(char *save)
{
	char	*str;
	int		i;
	
	i = 0;
	if (!save)
		return (0);
	while (save[i] && save[i] != '\n')
		i++;
	str = ft_strnew(i);
	if (!str)
		return (0);
	i = 0;
	while (save[i] && save[i] != '\n')
	{
		str[i] = save[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	ft_secu_av_tout(char *save)
{
	if (save)
	{
		free(save);
		save = 0;
	}
	return (-1);
}

static int	ft_n_ta_race(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_savebryan(char *save)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (save[i] && save[i] != '\n')
		i++;
	str = ft_strnew(ft_strlen(save) - i + 1);
	if (!str)
		return (0);
	i++;
	while (save[i])
		str[j++] = save[i++];
	str[j] = '\0';
	free(save);
	return (str);
}

int	get_next_line(int fd, char **line)
{
	char			buff[BUFFER_SIZE + 1];
	static char		*save;
	int				ret;

	if (BUFFER_SIZE < 1 || fd < 0 || fd > 1024)
		return (ft_secu_av_tout(save));
	ret = 1;
	while (ft_n_ta_race(save) == 0 && ret != 0)
	{
		ret = read(fd, buff, BUFFER_SIZE);
		if (ret == -1)
			return (ft_secu_av_tout(save));
		buff[ret] = '\0';
//		printf("[%s]\n", buff);
		save = ft_strjoin(save, buff);
	}
	*line = ft_pushdanstaline(save);
	save = ft_savebryan(save);
	if (ret == 0)
		return (0);
	return (1);
}
/*
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main()
{
    char            *line;
    int             fd;

    line = NULL;
    
    fd = open("test.txt", O_RDONLY);

    printf("gnl : %d\n", get_next_line(fd, &line));
    printf("main: %s\n", line);
    printf("gnl : %d\n", get_next_line(fd, &line));
    printf("main: %s\n", line);
     printf("gnl : %d\n", get_next_line(fd, &line));
    printf("main: %s\n", line);
      printf("gnl : %d\n", get_next_line(fd, &line));
    printf("main: %s\n", line);
    return (0);
}*/
