/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:42:18 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/13 16:20:44 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

 size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);

 size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
 {

 }

int	main(void)
{
	char src[]="something to copy";
	char dst[42] = "";

	printf("dst after ft_strlcpy %s", ft_strlcpy(dst, src, 16));
	printf("dst after strlcpy %s", strlcpy(dst, src, 16));
	return (0);
}