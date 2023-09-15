/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 02:16:38 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/15 02:16:40 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	i = 0;
	ptr1 = (unsigned char *) s1;
	ptr2 = (unsigned char *) s2;
	while (i < n)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int byte = 5;
// 	char str1[] = "atc";
// 	char str2[] = "abc";
// 	int	a = memcmp(str1,str2,byte);
// 	int b = ft_memcmp(str1,str2,byte);
// 	printf("real = %d cmp with my %d", a, b);
// 	return 0;
// }
