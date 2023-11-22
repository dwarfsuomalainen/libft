/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:55:49 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/22 15:29:29 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;

	arr = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		arr[j] = ft_substr(s, start, i - start);
		j++;
	}
	arr[j] = NULL;
	return (arr);
}

int	main(void)
{
	char	str[] = "this string to be splitted";
	char	**result;

	result = ft_split(str, ' ');
	while (*result)
	{
		printf("%s\n", *result);
		result++;
	}

	return (0);
}
