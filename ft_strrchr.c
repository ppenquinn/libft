/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:06:18 by nappalav          #+#    #+#             */
/*   Updated: 2023/08/29 21:17:39 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if ((char) *(str + i) == (char) c)
			return ((char *)(str + i));
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
