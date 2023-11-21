/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:14:50 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/09 10:31:12 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

void	ft_bzero(void *s, size_t n)
{
	char			*str;
	unsigned long	index;

	index = 0;

	str = (char *) s;
	if (n == 0)
		return ;
	while (index < n)
	{
		str[index] = '\0';
		index++;
	}
	return ;
}

int	main(void)
{
	char	*s;
	char	*s1;
	char	orig[] = "some of the spots will be replaced by";
	
	s = orig;
	s1 = orig;

	ft_bzero(s, 12);
	printf("\nown ft_bzero --> %s \n", s);
	bzero(s, 12);
	printf("\nOriginal bzero --> %s \n", s1);
	return (0);
}