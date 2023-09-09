/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:36:43 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/08 19:07:06 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*sub;
	size_t	i;

	len_s = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len_s >= len)
		sub = (char *)ft_calloc(len + 1, sizeof(char));
	else
		sub = (char *)ft_calloc(len_s + 1, sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}

// int    main(void)
// {
//     char *str = "i just want this part #############";
//      size_t size = 22;
//      char *ret = ft_substr("hola", 0, 18446744073709551615);

//      printf("ret is |%s|\n", ret);
//      free(ret);
//      return (0);
//  }
