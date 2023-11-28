/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:41:27 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/28 13:03:43 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*mem;

	total = count * size;
	mem = malloc(total);
	if (mem != NULL)
	{
		ft_memset(mem, 0, total);
	}
	return (mem);
}

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	int* arr1 = (int*)calloc(5, sizeof(int));

// 	if (arr1 != NULL)
// 	{
// 		while (i < 5)
// 		{
// 			printf("%d ", arr1[i]);
// 			i++;
// 		}
// 		free(arr1);
// 	}
// 	return (0);
// }
