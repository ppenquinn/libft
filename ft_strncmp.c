/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 02:18:36 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/15 22:19:05 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				cmp;
	unsigned char	*str1;
	unsigned char	*str2;

	cmp = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (cmp == 0 && (*str1 != '\0' || *str2 != '\0') && n > 0)
	{
		cmp = *str1 - *str2;
		str1++;
		str2++;
		n--;
	}
	return (cmp);
}

// int main(void)
// {
//     int a = ft_strncmp("test\200", "test\0", 6);
// 	int b = strncmp("test\200", "test\0", 6);

//     printf("%d cmp with %d",a, b);
// }
