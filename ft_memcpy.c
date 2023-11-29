/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:40:51 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/29 15:52:01 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			is;
	char			*d;
	const char		*s;

	s = src;
	d = dst;
	is = 0;
	if (dst == NULL || src == NULL)
		return (0);
	while (is < n)
	{
		d[is] = s[is];
		is++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char 	src[] = "Here is a source for copying";
// 	char	dst[42];
// 	char	dst1[42];
// 	printf("\nOwn function --> destination is --> %s\n", ft_memcpy(dst, src, 21));
// 	printf("\nOriginal function --> destination is --> %s\n", memcpy(dst1, src, 21));
// }