/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 00:16:39 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/15 22:14:01 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	i;

	idx = ft_strlen(dst);
	if (dstsize <= idx)
		return (ft_strlen(src) + dstsize);
	i = 0;
	while (src[i] && i < dstsize - 1 - idx)
	{
		dst[idx + i] = src[i];
		i++;
	}
	dst[idx + i] = '\0';
	return (idx + ft_strlen(src));
}

// int	main(void)
// {
// 	// char dest[30]; memset(dest, 0, 30);
// 	// char * src = (char *)"AAAAAAAAA";

// 	char dest[10] = "a";
//     printf("%d",(int)(ft_strlcat(dest, "lorem ipsum dolor sit amet", 6)));
// 	//printf("\nReal ft is %d\n", (int) strlcat("pqrstuvwxyz", "abcd", 20));
// 	//printf("Real dest is |%s|\n",dest);
// }
