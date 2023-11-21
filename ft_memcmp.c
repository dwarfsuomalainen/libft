/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:23:56 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/10 15:50:51 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char			*str1;
	unsigned char			*str2;
	unsigned long			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;

	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		else
			i++;
	}
	return (0);
}

int	main(void)
{
	char	str1[] = "String to33compare";
	char	str2[] = "String to compare";


	if (ft_memcmp(str1, str2, 10) == 0)
		printf("\nstr1 %s and str2 %s are identical\n", str1, str2);
	else
		printf("Difference between str1 and str2 is %d\n", ft_memcmp(str1, str2, 11));

	if (memcmp(str1, str2, 10) == 0)
		printf("\nstr1 %s and str2 %s are identical\n", str1, str2);
	else
		printf("\nDifference between str1 and str2 is %d\n", memcmp(str1, str2, 11));
		memcmp(str1, str2, 10);
}