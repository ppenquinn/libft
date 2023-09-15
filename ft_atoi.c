/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:22:41 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/15 21:55:34 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	handle_lld(long long num, char str, int sign)
{
	if (sign == 1)
	{
		if (num == LLONG_MAX / 10 && str - '0' > LLONG_MAX % 10)
			return (-1);
		if (num > LLONG_MAX / 10)
			return (-1);
	}
	if (sign == -1)
	{
		if (num == LLONG_MAX / 10 && str - '0' > (LLONG_MIN % 10) * -1)
			return (0);
		if (num > LLONG_MAX / 10)
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long long	num;
	int			check;

	num = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		check = handle_lld(num, *str, sign);
		if (check == -1 || check == 0)
			return (check);
		num = num * 10 + *str - '0';
		str++;
	}
	num *= sign;
	return (num);
}

// int main(void)
// {
// 	char a[] = "3874298347374982";
// 	printf("real = %d\n", atoi(a));
// 	printf("ft = %d\n", ft_atoi(a));
// 	return 0;
// }
