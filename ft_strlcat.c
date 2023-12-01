/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:18:51 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/12/01 15:28:10 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t				i;
	size_t				len;

	i = 0;
	len = ft_strlen(dst);
	if (dst == 0 && dstsize == 0)
		return (0);
	while (*dst && i < len)
	{
		dst++;
		i++;
	}
	while (*src && i < dstsize - 1)
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	return (len + ft_strlen(src));
}

int	main(void)
{
	char	src[] = "pqrstuvwxyz";
    char	dst[5] = "abcd";
	char	src1[] = "Helsinki";
    char	dst1[5] = "HIVE";

	size_t	result = ft_strlcat(dst, src, 1);
	size_t	result1 = strlcat(dst1, src1, 4);
	printf("\nft_strlcat destination --> %s \nlength --> %zu\n", dst, result);
	printf("\nstrlcat destination --> %s \nlength --> %zu\n", dst1, result1);
	return (0);
}