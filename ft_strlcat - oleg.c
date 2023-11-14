/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 08:21:06 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/07 12:17:52 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	total;
	size_t	original;

	if (dst == 0 && size == 0)
		return (0);
	original = size;
	total = ft_strlen(dst) + ft_strlen(src);
	while (*dst != 0 && size > 0)
	{
		dst++;
		size--;
	}
	if (size == 0)
		return (ft_strlen(src) + original);
	while (*src != 0 && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = 0;
	return (total);
}
/*
int main()
{
    char destination[20] = "Hello, ";
    const char *source = "World!";
    size_t destination_size = sizeof(destination);

    size_t result = ft_strlcat(destination, source, destination_size);

    printf("Resulting string: %s\n", destination);
    printf("Total length: %zu\n", result);

    return 0;
}*/
// DESCRIPTION
// strlcat() appends string src to the end of dst. It will append 
// at most dstsize - strlen(dst) - 1 characters. 
// It will then NUL-terminate, unless dstsize is 0
// or the original dst string was longer than dstsize
// (in practice this should not happen as it means that either
// dstsize is incorrect or that dst is not a proper string).

// If the src and dst strings overlap, the behavior is undefined.

// RETURN VALUES
// strlcat() functions return the total length
// of the string they tried to create.
// For strlcat() that means the initial length of dst plus the length of
// src.
// If the return value is >= dstsize, the output string has been truncated.
// It is the caller's responsibility to handle this.