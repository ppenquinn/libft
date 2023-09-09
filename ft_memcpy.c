/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:26:05 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/05 22:51:57 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*p_dst;
	char	*p_src;

	i = 0;
	if (!src && !dst)
		return (0);
	p_dst = (char *)dst;
	p_src = (char *)src;
	while (n > 0)
	{
		p_dst[i] = p_src[i];
		n--;
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char src[] = "this is a good nyancat !\r\n";
// 	char str1[0xF0];
// 	char str2[0xF0];
// 	int byte = strlen(src);
// 	char	*a = memmove(str1,str1,byte);
// 	char	*b = ft_memmove(str1,str1,byte);
// 	printf("real = %s cmp with %s", a, b);
// 	return 0;
// }
