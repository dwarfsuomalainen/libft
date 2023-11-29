/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:58:05 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/29 15:33:03 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c;

// 	c = '0';
// 	if (ft_isalpha(c) > 0)
// 		printf("symbol %c is alphabetical ", c);
// 	else
// 		printf("symbol %c is NONalphabetical ", c);
// }
