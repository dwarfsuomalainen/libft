/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:23:39 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/10/26 12:38:54 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c);

int	ft_isprint(int c)
{
	if (c >= 1 && c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	int	c;

	c = 0;
	if (ft_isprint(c) > 0)
		printf("Character %c is printable", c);
	else
		printf("Character %c is not printable", c);
}
