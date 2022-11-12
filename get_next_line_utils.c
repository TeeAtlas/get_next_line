/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:28:59 by taboterm          #+#    #+#             */
/*   Updated: 2022/11/12 10:45:10 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *str_a, char *str_b)
{
	size_t	i;
	size_t	j;
	char	*res;

	if (str_a == 0)
	{
		str_a = (char *)malloc(1);
		str_a[0] = '\0';
	}
	if (!str_a || !str_b)
		return (NULL);
	res = malloc(ft_strlen(str_a) + ft_strlen(str_b) + 1);
	if (!res)
		return (NULL);
	i = -1;
	j = 0;
	if (str_a)
		while (str_a[++i] != '\0')
			res[i] = str_a[i];
	while (str_b[j] != '\0')
		res[i++] = str_b[j++];
	res[i] = '\0';
	free(str_a);
	return (res);
}
