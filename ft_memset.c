/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 23:09:09 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/09 23:28:43 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;

	ptr = &b[len - 1];
	while (len > 0)
	{
		*ptr = c;
		ptr--;
		len--;
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
