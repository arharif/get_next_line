/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 08:24:11 by arharif           #+#    #+#             */
/*   Updated: 2021/12/19 08:24:15 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*ft_strjoin(char *dest, char *buff);
char	*ft_strchr(char *str, int ch);
char	*ft_read(int fd, char *str);
size_t	ft_strlen(const char *str);
char	*get_next_line(int fd);

#endif
