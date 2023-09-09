/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 23:09:09 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/03 00:39:39 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*ptr;

	ptr = &str[n - 1];
	while (n > 0)
	{
		*ptr = c;
		ptr--;
		n--;
	}
	return (str);
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
