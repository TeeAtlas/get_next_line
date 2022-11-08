/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wip_get_next_line.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:39:57 by taboterm          #+#    #+#             */
/*   Updated: 2022/11/08 17:31:19 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <libc.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char *str1, char *str2);
char	*gnl_read_line(char *str_a);
char	*gnl_output(char *str_a);
char	*gnl_new_line(char *str_a);


# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif
#endif
