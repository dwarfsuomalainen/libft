/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:35:13 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/10 13:58:45 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	unsigned long	i;

	str = (char *)s;
	i = 0;

	while (i < n)
	{
		if (str[i] != c)
			i++;
		else
			return (str);
	}
	return (NULL);
}

int	main(void)
{
	char	str[] = "Symbol * should be found";
	int		c;

	c = '*';

	printf("\nString to search --> %s\n", str);
	if (ft_memchr(str, c, 21) != NULL)
		printf("\nsymbol %c found\n", c);
	else
		printf("\nsymbol %c has not been found\n", c);
	if (memchr(str, c, 21) != NULL)
		printf("\nsymbol %c found\n", c);
	else
		printf("\nsymbol %c has not been found\n", c);
}