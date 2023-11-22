/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:18:56 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/22 16:10:06 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	ft_atoi(const char *str)
{
	int	num;
	int	x;

	num = 0;
	x = 0;

	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			num = num * 10 + *str - '0';
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}

int	main(void)
{
	char str[] = "989898";

	if ((ft_atoi(str) == 0))
		printf("no valid conversion could be performed");
	else
	{
		printf("\nstring %s(ft_atoi) --> %d\n", str, ft_atoi(str));
		printf("\nstring %s(atoi) --> %d\n", str, atoi(str));
	}
	return (0);
}