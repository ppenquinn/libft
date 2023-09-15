/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 00:28:49 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/15 21:56:47 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	idx;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	idx = 0;
	while (str[idx])
	{
		str[idx] = (*f)(idx, str[idx]);
		idx++;
	}
	return (str);
}

// char check_digit(unsigned int i, char s)
// {
// 	if (s >= '0' && s <= '9')
// 		return '0';
// 	else
// 		return '1';
// }

// int main()
// {
// 	char s[] = "12WER$#!$@1234";
// 	char *s1= ft_strmapi(s, check_digit);
// 	printf("%s\n", s1);
// }
