/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:51:38 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/15 22:32:21 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[i])
		return ((char *) haystack);
	if (len <= 0 || !haystack[i])
		return (NULL);
	while (haystack[i] && len > 0)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && len - j > 0)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *) &haystack[i]);
		}
		i++;
		len--;
	}
	return (NULL);
}

// int main()
// {
//     const char *haystack = "lorem ipsum dolor sit amet";
//     const char *needle = "dolor" ;
//     size_t len = 15; // Maximum length to search

//     char *result = strnstr(haystack, needle, len);
// 	char *my_result = ft_strnstr(haystack, needle, len);

// 	 printf("Result is |%s| cmp my |%s|\n", result, my_result);

//     return 0;
// }
