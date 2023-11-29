/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:54:15 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/29 14:49:36 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*mem;
	char			*substring;
	unsigned int	i;

	i = 0;
	mem = (char *)malloc(len + 1);
	if (!mem)
		return (NULL);
	substring = mem;
	while (i < len && *s != '\0')
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	substring[len] = '\0';
	return (substring);
}

// int	main(void)
// {
//     char    str[] = "string to be trimmed";
//     printf("substring --> >%s<\n", ft_substr(str, 6, 12));
// 	if (ft_substr(str, 23, 27) == NULL)
// 	{
// 		printf("allocation fails");
// 	}
// 	return (0);
// }
// // Allocates (with malloc(3)) and returns a substring
// // from the string ’s’.
// // The substring begins at index ’start’ and is of
// // maximum size ’len’.