/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:32:10 by taboterm          #+#    #+#             */
/*   Updated: 2022/09/01 15:41:37 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	
}

int	main(void)
{
	// this int is just the number the system uses to keep track of files
	//every open file has a number and it's a file descriptor
	int	fd;
	int i;
	
	fd = fopen("douglas.txt", "r");
	i = 0;
	
	while (i < 5)
	{
		printf("\n i: %d the function output:|%s|\n", i, get_next_line(fd));
		i++;
	}
	close(fd);
	return(0);
}