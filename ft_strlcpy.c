/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 02:18:12 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/15 02:18:15 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	cnt;
	size_t			size;

	cnt = 1;
	size = ft_strlen(src);
	if (dstsize == 0)
		return (size);
	while (cnt < dstsize && *src != '\0')
	{
		*dst = *src;
		src++;
		dst++;
		cnt++;
	}
	*dst = '\0';
	return (size);
}

// int main()
// {
//   char src[] = "lorem ipsum dolor sit amet";
//   char *ptr_src = &src[0];
//   char dest[15];
//     char dest2[15];
//   char *ptr_dest = &dest[0];
//   char *ptr_dest2 = &dest2[0];
//   unsigned int n = 0 ;

//   int len = ft_strlcpy(ptr_dest, "To be or not to be", n);
//   printf("MY dst = %s\n", ptr_dest);
//   int real_len = strlcpy(ptr_dest2, "To be or not to be", n);
//    printf("Real dest = %s\n", ptr_dest2);

//   printf("%d of %d",(int) len,(int) real_len);
// }
