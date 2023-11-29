/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:26:44 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/29 16:23:23 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (unsigned char)c)
		{
			return ((char *)str);
		}
		++str;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}

// int	main(void)
// {
// 	int	c;
// 	char str[] = "Is this a character you looking for ?";
// 	c = "?";

// 	if ((ft_strchr (*str, c)) == c)
// 		printf ("Character %c has been found", c);
// 	else
// 		printf ("Character %c has not been found", c);
//     return (0);
// }