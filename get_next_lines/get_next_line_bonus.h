/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 08:21:47 by arharif           #+#    #+#             */
/*   Updated: 2021/12/19 08:22:01 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

char	*ft_strjoin_bonus(char *dest, char *buff);
char	*ft_strchr_bonus(char *str, int ch);
char	*ft_read_bonus(int fd, char *str);
size_t	ft_strlen_bonus(const char *str);
char	*get_next_line_bonus(int fd);

#endif
