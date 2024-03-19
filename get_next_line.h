/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro5 <anacaro5@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:22:53 by anacaro5          #+#    #+#             */
/*   Updated: 2023/11/22 11:55:13 by anacaro5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

// Libraries
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
void	*ft_calloc(size_t n_elem, size_t size_bytes);
char	*ft_strchr(const char *str, int chr);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t	ft_strlen(const char *str);
char	*ft_countncut(char *line, char **rest);
char	*ft_readtxt(int fd, char *line, char *rest);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

#endif