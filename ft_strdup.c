/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:51:37 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/15 15:46:30 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h> 


char	*ft_strdup(const char *s1);

char	*ft_strdup(const char *s1)
{
	//void	*mem;
	int	len1;
	len1 = 39;
	char	*s2;

	s2 = (char *)malloc(39 + 1);
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