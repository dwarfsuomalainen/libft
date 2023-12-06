/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:18:51 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/12/05 16:24:15 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t				totallen;
	size_t				sizelen;

	if (dst == 0 && dstsize == 0)
		return (0);
	sizelen = dstsize;
	totallen = ft_strlen(src) + ft_strlen(dst);
	while (*dst && dstsize > 0)
	{
		dst++;
		dstsize--;
	}
	if (dstsize == 0)
		return (ft_strlen(src) + sizelen);
	while (*src && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = '\0';
	return (totallen);
}

// int	main(void)
// {
// 	char	src[] = "toto";
//     char	dst[20] = "";
// 	char	src1[] = "toto";
//     char	dst1[20] = "";

// 	size_t	result = ft_strlcat(dst, src, 0);
// 	size_t	result1 = strlcat(dst1, src1, 0);
// 	printf("\nft_strlcat destination --> %s \nlength --> %zu\n", dst, result);
// 	printf("\nstrlcat destination --> %s \nlength --> %zu\n", dst1, result1);
// 	return (0);
// }