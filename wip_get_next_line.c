/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wip_get_next_line.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:32:10 by taboterm          #+#    #+#             */
/*   Updated: 2022/11/07 18:56:20 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

char *gnl_get_line(char *save)
{
	
}

char	*get_next_line(int fd)
{
	
}

int	main(void)
{
	// this int is just the number the system uses to keep track of files
	//every open file has a number and it's a file descriptor
	int	fd;
	int i;
	
	fd = fopen("narnia.txt", O_RDONLY);
	i = 0;
	
	while (i < 5)
	{
		printf("\n i: %d the function output:|%s|\n", i, get_next_line(fd));
		i++;
	}
	close(fd);
	return(0);
}

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("narnia.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		if (line == NULL)
			break ;
		free(line);
	}
	

	return (0);
}