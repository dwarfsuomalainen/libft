/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:06:17 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/29 14:38:40 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

// int	main(void)
// {
// 	int	x;

// 	x = '*';
// 	printf ("Character %c to lower case is %c", x, ft_tolower(x));
// 	return (0);
// }