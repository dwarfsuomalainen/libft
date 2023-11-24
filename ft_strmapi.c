/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:57:49 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/24 15:18:52 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*processed;

	index = 0;
	if (s == 0 || f == 0)
		return (NULL);
	processed = ft_strdup(s);
	while (processed[index])
	{
		processed[index] = f(index, processed[index]);
		index++;
	}
	return (processed);
}

// char	fun(unsigned int p, char c)
// {
// 	p = 0;
// 	c = c + 1;

// 	return (c);

// }
// int	main(void)
// {
// 	char	str[] = "string on which to iterate";
// 	// unsigned int	x = 0;

// 	printf("original string --> %s, processed string --> %s", str, ft_strmapi(str, fun));
// }
