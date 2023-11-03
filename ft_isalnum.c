/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:55:03 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/10/24 16:19:01 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_isalnum(char c);

char	ft_isalnum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main(void)
{
	char	c;

	c = '!';
	if (ft_isalnum(c) < 1)
		printf ("The character %c is NOT alphanumeric", c);
	else
		printf ("The character %c IS alphanumeric", c);
}
