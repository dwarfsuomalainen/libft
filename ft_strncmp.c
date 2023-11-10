/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:52:50 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/06 12:22:24 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				c;
	unsigned long	index;

	index = 0;

	while (index <= n)
	{
		c = s1[index] - s2[index];
		if (c == 0)
			index++;
		else
			return (c);
	}
	return (0);
}

int main(void)
{
    char    str1[]= "string to compare";
    char    str2[]= "string to compare";
    char    *s1;
    char    *s2;

    s1 = str1;
    s2 = str2;

    if ((ft_strncmp(s1, s2, 8)) < 0)
        printf("str1 is less than str2 \n");
    else if ((ft_strncmp(s1, s2, 8)) > 0)
        printf("str2 is less than str1 \n");
    else
        printf("str1 is equal to str2 \n");
    
    printf ("Original strncmp \n");

    if ((strncmp(s1, s2, 8)) < 0)
        printf("str1 is less than str2 \n");
    else if ((strncmp(s1, s2, 8)) > 0)
        printf("str2 is less than str1 \n");
    else
        printf("str1 is equal to str2 \n");
    return(0);
}

