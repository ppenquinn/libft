/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 02:16:30 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/15 02:16:33 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *) s;
	while (n >= 1)
	{
		if ((unsigned char) *ptr == (unsigned char) c)
			return ((void *)ptr);
		n--;
		ptr++;
	}
	return (0);
}

// int main(void)
// {
// 	const char str[] = "Napat";
// 	const char ch = 'l';
// 	size_t n = 3;
// 	char *ret;
// 	char *ft;

// 	ret = memchr(str, ch, n);
// 	ft = (char *) ft_memchr(str, ch, n);
// 	printf("String after |%c| is - |%s| cmp with my ||%s||\n", ch, ret, ft);
// 	printf("check : %d\n",(ft == ret));
// }
