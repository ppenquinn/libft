/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 02:18:47 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/15 02:18:49 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((char) *(s + i) == (char) c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

// int	main(void)
// {
// 	char *src = "";

// 	char *d1 = strrchr(src, 0);
// 	char *d2 = ft_strrchr(src, 0);

// 	printf("real = %s cmp with my %s", d1, d2);
// 	return 0;
// }
