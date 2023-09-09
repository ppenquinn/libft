/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:04:18 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/04 16:53:33 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if (*s == (char) c)
		return ((char *) s);
	return (0);
}

// int	main(void)
// {
// 	char *src = "tripouille";
// 	char *d1 = strchr(src, 'p' + 256);
// 	char *d2 = ft_strchr(src, 'p' + 256);

// 	printf("real = %s cmp with my %s", d1, d2);
// 	return 0;
// }
