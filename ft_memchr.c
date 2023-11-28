/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:35:13 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/28 14:38:21 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		unc;

	str = s;
	unc = (unsigned char)c;
	while (n--)
	{
		if (*str != unc)
			str++;
		else
			return ((void *)str);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "Symbol * should be found";
// 	int		c;

// 	c = '*';

// 	printf("\nString to search --> %s\n", str);
// 	if (ft_memchr(str, c, 21) != NULL)
// 		printf("\nsymbol %c found\n", c);
// 	else
// 		printf("\nsymbol %c has not been found\n", c);
// 	if (memchr(str, c, 21) != NULL)
// 		printf("\nsymbol %c found\n", c);
// 	else
// 		printf("\nsymbol %c has not been found\n", c);
// }