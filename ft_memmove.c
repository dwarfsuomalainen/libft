/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:19:21 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/12/02 14:18:00 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*d;
	const unsigned char		*s;
	size_t					i;

	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	i = 0;
	if (d == s)
		return (dst);
	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		d = dst + len;
		s = src + len;
		while (len--)
			*(--d) = *(--s);
	}
	return (dst);
}

// int	main(void)
// {
// 	char 	src[] = "195654";
// 	char	dst[42];
// 	char	dst1[42];

// 	printf("\nOwn function --> destination is -->
// %s*\n", ft_memmove(dst, src, 21));
// 	printf("\nOriginal function --> destination is -->
// %s*\n", memmove(dst1, src, 21));
// }
