/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:43:49 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/12/04 10:37:09 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	unsigned long	p;
// 	unsigned long	i;

// 	p = 0;
// 	i = 0;
// 	if (haystack == 0 && len == 0)
// 	{
// 		return (0);
// 	}
// 	while (p < len)
// 	{
// 		if (needle[0] == '\0')
// 			return ((char *)haystack);
// 		else if (haystack[p] == needle[0])
// 		{
// 			while (needle[i] != '\0' && haystack[p + i] == needle[i])
// 			{
// 				i++;
// 			}
// 			if (needle[i] == '\0')
// 				return ((char *)&haystack[p]);
// 		}
// 		p++;
// 	}
// 	return (NULL);
// }
{
	size_t	needle_len;

	if (haystack == 0 && len == 0)
	{
		return (0);
	}
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
	{
		return ((char *)haystack);
	}
	while (*haystack && len >= needle_len)
	{
		if (*haystack == *needle
			&& ft_strncmp(haystack, needle, needle_len) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char	h[] = "We need to find THIS to show the rest of the string";
// 	char	n[] = "THI";
// 	if (ft_strnstr(h, n, 21) == h)
// 		printf("\nneedle is an empty string\n");
// 	else if (ft_strnstr(h, n, 21) == NULL)
// 		printf("\nneedle occurs nowhere in haystack\n");
// 	else
// 		printf("\nHere is the rest of 
//string after needle occurance %s\n", ft_strnstr(h, n, 21));
// 	if (strnstr(h, n, 21) == h)
// 		printf("\nneedle is an empty string\n");
// 	else if (strnstr(h, n, 21) == NULL)
// 		printf("\nneedle occurs nowhere in haystack\n");
// 	else
// 		printf("\nHere is the rest of 
//string after needle occurence %s\n", strnstr(h, n, 21));
// }