/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:41:27 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/15 13:46:46 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_memset.c"

void	*ft_calloc(size_t count, size_t size);

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

int	main(void)
{
    int* arr = (int*)ft_calloc(5, sizeof(int));
    if (arr != NULL) {
        for (int i = 0; i < 5; ++i) {
            printf("%d ", arr[i]);
			printf("\n"); 
        }

        free(arr);
    }

	    int* arr1 = (int*)calloc(5, sizeof(int));
    if (arr1 != NULL) {
        for (int i = 0; i < 5; ++i) {
            printf("%d ", arr1[i]); 
        }

        free(arr1);
    }

    return 0;
}