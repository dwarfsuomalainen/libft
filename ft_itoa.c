/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:56:41 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/22 16:01:51 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*num;

	num = (char *)malloc(sizeof(char *));
	if (!num)
		return (NULL);
	return (num);
}

int	main(void)
{
	int	n;

	n = 0;
	printf("string representation of number %d is %s", n, ft_itoa(n));
	return (0);
}
