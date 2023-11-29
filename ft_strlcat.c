/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:18:51 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/29 14:36:38 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		i;
	size_t		len;

	d = dst;
	s = src;
	i = 0;
	len = ft_strlen(d);
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	while (*d && i < len)
	{
		d++;
		i++;
	}
	while (*s && i < dstsize - 1)
	{
		*d++ = *s++;
		i++;
	}
	*d = '\0';
	return (i + ft_strlen(s));
}

// int	main(void)
// {
// 	char	src[] = "Helsinki";
//     char	dst[5] = "HIVE";
// 	char	src1[] = "Helsinki";
//     char	dst1[5] = "HIVE";

// 	size_t	result = ft_strlcat(dst, src, 4);
// 	size_t	result1 = strlcat(dst1, src1, 4);
// 	printf("\nft_strlcat destination --> %s \nlength --> %zu\n", dst, result);
// 	printf("\nstrlcat destination --> %s \nlength --> %zu\n", dst1, result1);
// 	return (0);
// }