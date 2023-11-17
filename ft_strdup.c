/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:51:37 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/17 11:35:09 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
//#include <stdlib.h>
#include <string.h> 


char	*ft_strdup(const char *s1);

char	*ft_strdup(const char *s1)
{
	int		len1;
	char	*s2;

	len1 = ft_strlen(s1);

	s2 = (char *)malloc(len1 + 1);
	if (s2 != NULL)
	{
		strcpy(s2, s1);
	}
	return (s2);
}

int	main(void)
{
	char	str[] = "this string should appear in the output";

	printf("OUTPUT --> %s", ft_strdup(str));
	printf("OUTPUT of original strdup() --> %s", strdup(str));
	return (0);
}