/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:43:49 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/10 16:33:05 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	unsigned long	p;
	unsigned long	v;

	i = 0;
	p = 0;

	while (p < len)
		if (haystack[i] != needle[i])
			i++;
		else if (haystack[i] == needle[i])
			while (needle != '\0')
			{
				if (haystack[i] == needle[i])
					i++;
			}
				


	return (NULL);
}

int	main(void)
{
	char	h[] = "We need to find THIS to show the rest of the string";
	char	n[] = "THIS";

	if (ft_strnstr(h, n, 21) == h)
		printf("needle is an empty string");
	else if (ft_strnstr(h, n, 21) == NULL)
		printf("needleoccurs nowhere in haystack");
	else
		printf("Here is the rest of string after needle occurance %s", ft_strnstr(h, n, 10));

	if (strnstr(h, n, 21) == h)
		printf("needle is an empty string");
	else if (strnstr(h, n, 21) == NULL)
		printf("needle occurs nowhere in haystack");
	else
		printf("Here is the rest of string after needle occurence %s", strnstr(h, n, 21));

}