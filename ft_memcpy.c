/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:40:51 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/10 10:57:35 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned long	is;
	char			*d;
	const char		*s;

	s = src;
	d = dst;
	is = 0;

	while (is < n)
	{
		d[is] = s[is];
		is++;
	}
	return (dst);
}

int	main(void)
{
	char 	src[] = "Here is a source for copying";
	char	dst[42];
	char	dst1[42];

	printf("\nOwn function --> destination is --> %s\n", ft_memcpy(dst, src, 21));
	printf("\nOriginal function --> destination is --> %s\n", memcpy(dst1, src, 21));
}
