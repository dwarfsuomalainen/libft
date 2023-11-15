/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:42:18 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/15 15:40:25 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

size_t	ft_strlcpy(char*restrict dst, const char*restrict src, size_t dstsize);

size_t	ft_strlcpy(char*restrict dst, const char*restrict src, size_t dstsize)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;

	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	while (*s && i < dstsize - 1)
	{
		*d++ = *s++;
		i++;
	}
	*d = '\0';
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

// int	main(void)
// {
// 	char src[]="something to copy";
// 	char dst[42] = "";
// 	char src1[]="something to copy";
// 	char dst1[42] = "";

// 	printf("\ndst after ft_strlcpy --> %s \nreturn of function --> %zu\n", dst, ft_strlcpy(dst, src, 16));
// 	printf("\ndst after strlcpy --> %s \nreturn of function --> %zu \n", dst, strlcpy(dst1, src1, 16));
// 	return (0);
// }