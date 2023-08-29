/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imouji-b- <imouji-b@student.42berlin.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:10:35 by imouji-b          #+#    #+#             */
/*   Updated: 2023/08/20 00:10:06 by imouji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *get_next_line(int fd);
// in this function 
    char        *line;
    static char *left_str;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    left_str = ft_read_to_left_str(fd, left_str);
    if (!left_str)
        return (NULL);
    line = ft_get_line(left_str);










char    *ft_read_to_left_str(int fd, char *left_str);