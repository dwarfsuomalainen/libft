/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:47:11 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/10/26 12:16:15 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c);

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 177)
		return (1);
	return (0);
}

int	main(void)
{
	int	c;

	c = 'y';
	if (ft_isascii(c) > 0)
		printf("Symbol %c is an ASCII symbol", c);
	else
		printf("Symbol %c is NOT an ASCII symbol", c);
}
