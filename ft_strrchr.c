/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:09:53 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/29 15:44:00 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	int	index;

	len = ft_strlen(s);
	index = len - 1;
	while (index >= 0)
	{
		if (s[index] == c)
			return ((char *)&s[index]);
		index--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	int	c;
// 	char	str[] = "Here is a character * you are 
//looking for * yes, last one * very last one";
// 	char	*strptr;
// 	c = '#';
// 	strptr = str;
// 	if ((ft_strrchr(strptr, c) != NULL))
// 		printf("string after last found symbol
// >>%c<< is %s", c, (ft_strrchr(strptr, c)));
// 	else
// 		printf("symbol %c has not been found", c);
// 	return (0);
// }