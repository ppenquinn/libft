/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:42:04 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/20 12:17:02 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	toa(int n, char *ans, size_t digit)
{
	if (n < 0 && n > -10)
		*ans = '-';
	if (n >= 10 || n <= -10)
	{
		toa (n / 10, ans, digit - 1);
		n %= 10;
	}
	if (n >= 0)
		*(ans + digit) = '0' + n;
	else
		*(ans + digit) = '0' - n;
}

static size_t	find_digits(int n)
{
	size_t	digit;

	digit = 0;
	while (n > 0)
	{
		digit++;
		n /= 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	digit;

	if (n > 0)
		digit = find_digits(n);
	else if (n == 0)
		digit = 1;
	else if (n == INT_MIN)
		digit = 11;
	else
		digit = find_digits(n * -1) + 1;
	s = (char *)ft_calloc(digit + 1, sizeof(char));
	if (!s)
		return (NULL);
	toa(n, s, digit - 1);
	return (s);
}

// int	main(void)
// {
// 	printf("num is %s",ft_itoa(-2147483648));
// 	return (0);
// }
