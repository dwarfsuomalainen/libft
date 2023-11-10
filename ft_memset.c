/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:55:34 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/08 11:36:40 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n);

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned long	index;
	unsigned char	p;
	char			*s;

	p = c;
	s = (char *) str;
	index = 0;

	while (index < n)
	{
		s[index] = p;
		index++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "some of the spots will be replaced by";
	char	*s;
	char	z;

	s = str;
	z = '&';
	printf("\noriginal string --> %s \n \n", s);
	printf("own memset --> %s %c \n \n", ft_memset(s, z, 10), z);
	printf("original memset --> %s %c \n", memset(s, z, 10), z);
	if ((ft_memset(s, z, 10)) == (memset(s, z, 10)))
		printf("\nFunctions are equal \n");
	return(0);



}