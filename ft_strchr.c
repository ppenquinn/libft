/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 02:17:46 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/15 22:29:40 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = c;
	while (*s)
	{
		if (*s == chr)
			return ((char *) s);
		s++;
	}
	if (*s == chr)
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
