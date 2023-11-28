/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:14:50 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/28 12:49:15 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
}

// int	main(void)
// {
// 	// char	*s;
// 	// char	*s1;
// 	char	orig[] = "some of the spots will be replaced by";
// 	char	orig1[] = "some of the spots will be replaced by";
// 	// s = "some of the spots will be replaced by";
// 	// s1 = "some of the spots will be replaced by";
// 	ft_bzero((void *)orig, (0));
// 	printf("\nown ft_bzero --> %s \n", orig);
// 	bzero(orig1, (0));
// 	printf("\nOriginal bzero --> %s \n", orig1);
// 	return (0);
// }