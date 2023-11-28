/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:18:56 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/28 12:29:11 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_notanum(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_atoi(const char *str)
{
	int	num;
	int	neg;

	num = 0;
	neg = 1;
	while (ft_notanum(*str))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			neg = -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * neg);
}

// int	main(void)
// {
// 	char str[] = "-9b89898";

// 	if ((ft_atoi(str) == 0))
// 		printf("no valid conversion could be performed");
// 	else
// 	{
// 		printf("\nstring %s(ft_atoi) --> %d\n", str, ft_atoi(str));
// 		printf("\nstring %s(atoi) --> %d\n", str, atoi(str));
// 	}
// 	printf("\nstring %s(ft_atoi) --> %d\n", str, ft_atoi(str));
// 	printf("\nstring %s(atoi) --> %d\n", str, atoi(str));
// 	return (0);
// }
