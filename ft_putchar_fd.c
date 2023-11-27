/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:00:15 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/27 12:44:01 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

// int main(void)
// {
//     int     fd;
//     int    c;

//     fd = 1;
//     c = 'X';

//     ft_putchar_fd(c, fd);
// }