/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:58:05 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/10/26 11:37:33 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_isalpha(char c);

char	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	main(void)
{
	char	c;

	c = '0';
	if (ft_isalpha(c) > 0)
		printf("symbol %c is alphabetical ", c);
	else
		printf("symbol %c is NONalphabetical ", c);
}
