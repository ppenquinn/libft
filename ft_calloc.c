/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:53:55 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/03 00:46:10 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;

	temp = malloc(count * size);
	if (!temp)
		return (NULL);
	ft_memset(temp, 0, count * size);
	return (temp);
}

// int main(void)
// {
// 	int size = 8539;

//     void * d1 = ft_calloc(size, sizeof(int));
//     void * d2 = calloc(size, sizeof(int));
//     printf("Real %p cmp with my %p", d2, d1);
//     free(d1);
//     free(d2);
// }
