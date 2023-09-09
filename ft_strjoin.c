/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 01:35:54 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/03 02:09:59 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*first;

	str = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!str)
		return (NULL);
	first = str;
	str = ft_memmove(str, s1, ft_strlen(s1));
	str += ft_strlen(s1);
	str = ft_memmove(str, s2, ft_strlen(s2));
	return (first);
}

// int	main(void)
// {
// 	printf("%s", ft_strjoin("abc", "def"));
// 	return (0);
// }
