/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:53:39 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/29 14:35:13 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	int		i;
	int		k;
	char	*newstring;

	i = 0;
	k = 0;
	mem = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!mem)
		return (NULL);
	newstring = mem;
	while (ft_strlen(s1) > i)
	{
		newstring[i] = s1[i];
		i++;
	}
	while (ft_strlen(s2) > k)
	{
		newstring[i] = s2[k];
		i++;
		k++;
	}
	newstring[i] = '\0';
	return (newstring);
}

// int	main(void)
// {
// 	char s1[] = "first string";
// 	char s2[] = "second string";

// 	if (ft_strjoin(s1 ,s2) == NULL)
// 		printf("allocation fails");
// 	printf("concatinated new string --> %s", ft_strjoin(s1,s2));
// 	return (0);
// }