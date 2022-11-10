/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:46:15 by taboterm          #+#    #+#             */
/*   Updated: 2022/11/10 12:14:31 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
/*pass function again in while loop
to "read next line"*/

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("narnia.txt", O_RDONLY);
	// printf("\n-----------------------------------------------\n");
	line = get_next_line(fd);
	printf("\n-----------------------------------------------\n");
	printf("line:%s", line);
	while (line)
	{
		printf("line:%s", line);
		free(line);
		line = get_next_line(fd); 
	}
	free(line);
	printf("\n-----------------------------------------------\n");
	return (0);
}

