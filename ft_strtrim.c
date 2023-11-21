/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:54:52 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/21 15:48:41 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;

	first = 0;
	while (s1[first] && ft_strchr(set, s1[first]))
	{
		first++;
	}
	printf("\n%zu\n", first);
	last = ft_strlen(s1);
	printf("%d", ft_strchr(set, s1[last]));
	while (last && ft_strchr(set, s1[last - 1]))
	{
		printf("\n%zu\n", last);
		last--;
	}
	printf("\n%zu\n", last);
	if (!s1 || !set)
		return (NULL);

	return (ft_substr(s1, first, last - first));
}


int	main(void)
{
	char    str[] = "string to be string trimmed string";
	char    set[] = "string";

	if (ft_strtrim(str, set) == NULL)
	{
		printf("allocation fails");
	}
	printf("the rest of original string --> *%s*", ft_strtrim(str, set));
	return (0);
}