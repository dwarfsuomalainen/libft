/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:52:50 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/12/02 14:54:03 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	unsigned char	c;
// 	unsigned long	index;

// 	index = 0;
// 	while (index <= n)
// 	{
// 		c = (unsigned char)s1[index] - (unsigned char)s2[index];
// 		if (c == 0)
// 		{
// 			index++;
// 		}
// 		else
// 			return (c);
// 	}
// 	return (0);
// }

{
	while (n > 0 && (*s1 || *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int	main(void)
// {
// 	char    str1[]= "string to Compare";
//     char    str2[]= "string to compare";
//     char    *s1;
//     char    *s2;
//     s1 = str1;
//     s2 = str2;
//     if ((ft_strncmp(s1, s2, 16)) < 0)
//         printf("str1 is less than str2 \n");
//     else if ((ft_strncmp(s1, s2, 16)) > 0)
//         printf("str2 is less than str1 \n");
//     else
//         printf("str1 is equal to str2 \n");
//     printf ("Original strncmp \n");
//     if ((strncmp(s1, s2, 8)) < 0)
//         printf("str1 is less than str2 \n");
//     else if ((strncmp(s1, s2, 8)) > 0)
//         printf("str2 is less than str1 \n");
//     else
//         printf("str1 is equal to str2 \n");
//     return(0);
// }
