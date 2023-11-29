/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:12:25 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/29 15:34:31 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_isdigit(int i)
{
	while ((i >= '0' && i <= '9'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'r';
// 	if (ft_isdigit(c) > 0)
// 		printf ("The symbol %c is digit", c);
// 	else
// 		printf ("The symbol %c is NOT a digit", c);
// }
