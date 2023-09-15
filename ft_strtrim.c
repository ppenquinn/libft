/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:37:54 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/15 22:31:47 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*trim;
	size_t	i;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *) s1);
	len = ft_strlen(s1);
	start = (char *)&s1[0];
	end = (char *)&s1[len - 1];
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i++]))
		start++;
	i = 0;
	while (s1[i] && ft_strchr(set, s1[len - i++ - 1]))
		end--;
	trim = ft_substr(s1, start - s1, end - start + 1);
	return (trim);
}

// int main(void)
// {
//     char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !";
//     char *s2 = "   \t  \n\n \t\t  \n\n\n";

//     char *str = ft_strtrim(s1, s2);
//     printf("%s\n", str);
//     return (0);
// }
