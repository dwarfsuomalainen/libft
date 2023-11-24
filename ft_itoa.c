/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbogoudi <rbogoudi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:56:41 by rbogoudi          #+#    #+#             */
/*   Updated: 2023/11/24 11:33:29 by rbogoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	intlen;

	intlen = 0;
	if (n == 0)
		n = 1;
	if (n < 0)
		n = -n;
	while (n != 0)
	{
		n /= 10;
		intlen++;
	}
//	printf("n length ->> %d\n", intlen);
	return (intlen);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		isneg;
	int		length;
	int		index;

	if (n < 0)
		isneg = 1;
	else
		isneg = 0;
	length = ft_intlen(n);
	num = (char *)malloc((length + isneg + 1));
	if (!num)
		return (NULL);
	index = (length + isneg) - 1;
	num[index + 1] = '\0';
	if (isneg)
{		num[0] = '-';
		n = -n;}
	while (index >= 0 && n != 0)
	{
		num[index--] = '0' + n % 10;
		n /= 10;
	}
	return (num);
}

// int	main(void)
// {
// 	int	n;

// 	n = 123;
// 	printf("string representation of number %d is %s", n, ft_itoa(n));
// 	return (0);
// }
