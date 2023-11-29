/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:03:01 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/29 14:35:17 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_maxmin(int fd)
{
	const char	*str;

	str = "-2147483648";
	while (*str)
	{
		ft_putchar_fd(*str, fd);
		str++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n == -2147483648)
	{
		ft_maxmin(fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

// int	main(void)
// {
// 	int	x;
// 	int	fd;

// 	x = -9;
// 	fd = 1;

// 	ft_putnbr_fd (x, fd);
// 	}
