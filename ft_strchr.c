/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:26:44 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/02 13:40:47 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strchar(const char *str, int c);

int	ft_strchar(const char *str, int c)
{
	while (*str != '\0')
	{
        if (*str == c)
            return (c);
		else
            ++str;
		}
    return (0);
}

int	main(void)
{
	int	c;
	char str[] = "Is this a character you looking for ?";
	char *strPtr;

	c = '!';
	strPtr = str;

	if ((ft_strchar (strPtr, c)) == c)
		printf ("Character %c has been found", c);
	else
		printf ("Character %c has not been found", c);
    return (0);
}