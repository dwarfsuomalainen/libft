/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:54:15 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/12/05 15:41:58 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start >= (size_t)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (size_t)ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substring = (char *)malloc(len + 1);
	if (!substring)
		return (NULL);
	i = 0;
	while (i < len && *s != '\0')
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[len] = '\0';
	return (substring);
}

// int	main(void)
// {
//     char    str[] = "string to be trimmed";
//     printf("substring --> >%s<\n", ft_substr(str, 5, 6));
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