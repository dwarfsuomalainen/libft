/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:19:21 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/10 12:32:32 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	char		*s;
	size_t		i;

	d = dst;
	s = (char *)src;
	i = 0;

	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		while (i > len)
		{
			d[i - 1] = s[i -1];
			i--;
		}
	}
	return (dst);
}

int	main(void)
{
	char 	src[] = "Here is a source for copying";
	char	dst[42];
	char	dst1[42];

	printf("\nOwn function --> destination is --> %s\n", ft_memmove(dst, src, 21));
	printf("\nOriginal function --> destination is --> %s\n", memmove(dst1, src, 21));
}