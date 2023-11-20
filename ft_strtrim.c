/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:54:52 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/20 16:32:11 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	char	*mem;
	// int		i;
	// int		k;
	size_t	len;
	size_t	totallen;

	i = 0;
	k = 0;
	len = ft_strlen(set);
	mem = (char *)malloc(totallen + 1);
	if (!trimmed)
		return (NULL);

	return (trimmed);
}

int main (void)
{
    char    str[] = "string to be string trimmed string";
    char    set[] = "string";
    if (ft_strtrim(str, set) == NULL)
    {
        printf("allocation fails");
    }
    printf("the rest of original string --> %s", ft_strtrim(str, set));
    return (0);
    
}