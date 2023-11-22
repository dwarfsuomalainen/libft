/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:55:49 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/22 14:59:25 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// char	**ft_split(char const *s, char c)
// {
// 	char	**arr;

// 	printf("\n*%c*\n", c);
// 	if (!arr)
// 		return (NULL);
// 	return (arr);
// }

// int	main(void)
// {
// 	char    str[] = "this string to be splitted";
	
// 	printf("array of strings after splitting this strind %s --> %s", str, ft_split(str, " "));
// 	return (0);
// }
char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;

	// Allocate memory for the array
	arr = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!arr)
		return (NULL);

	// Loop through the string
	while (s[i])
	{
		// Find the beginning of a word
		while (s[i] == c)
			i++;

		// Mark the start of the word
		start = i;

		// Find the end of the word
		while (s[i] && s[i] != c)
			i++;

		// Allocate memory for the word
		arr[j] = ft_substr(s, start, i - start);

		// Move to the next index
		j++;
	}

	// Set the last element of the array to NULL
	arr[j] = NULL;

	return (arr);
}

int	main(void)
{
	char	str[] = "this string to be splitted";
	char	**result;

	result = ft_split(str, ' ');

	// Print the array of strings
	while (*result)
	{
		printf("%s\n", *result);
		result++;
	}

	return (0);
}
