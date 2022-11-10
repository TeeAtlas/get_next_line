/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:32:10 by taboterm          #+#    #+#             */
/*   Updated: 2022/11/10 11:47:58 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

char	*gnl_output(char *str_a)
{
	int		i;
	char	*s;

	i = 0;
	if (!str_a[i])
		return (NULL);
	if (str_a[i] && str_a[i] != '\0')
		i++;
	s = (char *)malloc(sizeof(char) * (i + 2));
	if (!s)
		return (NULL);
	i = 0;
	while (str_a[i] && str_a[i] != '\0')
	{
		s[i] = str_a[i];
		i++;
	}
	if (str_a[i] == '\n')
	{
		s[i] = str_a[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

/*prints & frees saved line, and follows save characters from new line*/
char	*gnl_new_line(char *str_a)
{
	long int	i;
	long int	j;
	char		*str;

	i = 0;
	while (str_a[i] && str_a[i] != '\n')
		i++;
	if (str_a[i])
	{
		free(str_a);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(str_a)));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (str_a[i])
		str[j++] = str_a[i];
	str[j] = '\n';
	free (str_a);
	return (str);
}

char	*gnl_read_line(int fd, char *str_a)
//buffer reads and stores line
{
	char	*buffer;
	int		read_byte;

	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	read_byte = 1;
	while (!ft_strchr(str_a, '\n') && read_byte != 0)
	{
		read_byte = read(fd, buffer, BUFFER_SIZE);
		if (!buffer)
		{
			free(buffer);
			return (NULL);
		}
		buffer[read_byte] = '\0';
		str_a = ft_strjoin(str_a, buffer);
	}
	free(buffer);
	return (str_a);
}

char	*get_next_line(int fd)
	//static char stores overhang
{
	static char	*str_a;
	char		*str_b;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str_a = gnl_read_line(fd, str_a);
	if (!str_a)
	{
		free(str_a);
		return (NULL);
	}
	str_b = gnl_output(str_a);
	str_a = gnl_new_line(str_a);
	return (str_b);
}
