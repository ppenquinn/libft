/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:22:41 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/04 23:06:49 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

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
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	num *= sign;
	return (num);
}

// int	main(void)
// {
// 	char a[] = "2147483647";
// 	printf("real = %d\n",atoi(a));
// 	printf("ft = %d\n",ft_atoi(a));
// 	return 0;
// }
