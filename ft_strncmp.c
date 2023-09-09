/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:07:28 by nappalav          #+#    #+#             */
/*   Updated: 2023/08/29 03:40:29 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	cmp;

	cmp = 0;
	while (cmp == 0 && (*s1 != '\0' || *s2 != '\0') && n > 0)
	{
		cmp = (unsigned char) *s1 - (unsigned char) *s2;
		s1++;
		s2++;
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
