/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:59:23 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/27 15:41:13 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	index = 0;
	if (s || f)
	{
		while (&s[index])
		{
			f(index, &s[index]);
			index++;
		}
	}

}

//i do not operate to values into this f, instead i operate values by its addresses straight in the string! 