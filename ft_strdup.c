/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rb <rb@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:51:37 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/17 20:48:38 by rb               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h" 


char	*ft_strdup(const char *s1);

char	*ft_strdup(const char *s1)
{
	size_t	lensrc;
	char	*s2;
	char	*dest;

	lensrc = 0;

	if (!s1)
		return (NULL);
	while (s1[lensrc])
		lensrc++;
	s2 = (char *)malloc(lensrc + 1);
	dest = s2;
	while (*s1)
	{
		*s2++ = *s1++;
	}
	*s2 = '\0';
	return (dest);
}

int	main(void)
{
	char	str[] = "this string should appear in the output";
	char	str1[] = "this string should appear in the output";

	printf("\nOUTPUT --> %s\n", ft_strdup(str));
	printf("\nOUTPUT of original strdup() --> %s\n", strdup(str1));
	return (0);
}