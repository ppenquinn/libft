/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 02:17:32 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/15 12:02:56 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;
	size_t	idx;

	ptr = (char *) b;
	idx = 0;
	while (idx < len)
	{
		*(ptr + idx) = c;
		idx++;
	}
	return (b);
}

// int main ()
// {
//    char str[50];

//    strcpy(str,"This is string.h library function");
//    puts(str);

//    memset(str,'$',7);
//    puts(str);
//    ft_memset(str,'#',7);
//    puts(str);

//    return(0);
// }
