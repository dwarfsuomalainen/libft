/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:00:58 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/27 13:10:10 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
}

int main(void)
{
    int fd;
    char    s[] = "here is a string to print out";
    
    fd = 1;

    ft_putstr_fd(s, fd);
}
