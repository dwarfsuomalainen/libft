/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:12:25 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/10/24 16:19:44 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_isdigit(char i);

char	ft_isdigit(char i)
{
	while ((i >= '0' && i <= '9'))
		return (1);
	return (0);
}

int	main(void)
{
	char	c;

	c = 'r';
	if (ft_isdigit(c) > 0)
		printf ("The symbol %c is digit", c);
	else
		printf ("The symbol %c is NOT a digit", c);
}
