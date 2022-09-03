/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:28:59 by taboterm          #+#    #+#             */
/*   Updated: 2022/09/01 19:32:04 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

//strchr point to beginning of characher string 
//this might be the buffer - ask

char	*ft_strchr(const char *str, int c)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)str + i);
	return ((char *) 0);
}

char	*ft_strjoin(char *str1, char *str2)
{
	size_t	i;
	size_t	j;
	char	*res;

	
	if (str1 == 0)
	{
		str1 = (char *)malloc(sizeof(char) * 1);
		str1[0] = '\0';
	}
	if (!str1 || !str2)
		return(NULL);
	res = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!res)
		return(NULL);
	i = -1;
	j = 0;
	if (str1)
		while(str1[++i] != '\0')
			res[i] = str1[i];
	while(str2[j] != '\0')
		res[i++] = str2[j++];
	res[i] = '\0';
	free(str1);
	return(res);
}


int	main(void)
{
	// char str[] = "1234567c89";
	// printf("Test \n");
	// printf("strlen function: %ld\n", ft_strlen(str));
	// printf("before function: %s\n", str);
	// printf("after function: %s\n", ft_strchr(str, '8'));
	// printf("different function buffer: %s\n", ft_strchr(str, '4'));

	char str1[] = "Wow!";
	char str2[] = "You did it.";
	printf("New str is:\n");
	printf("%s\n, ft_strjoin(str1, str2");
	
	
	return	0;
}