/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:26:43 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/02 14:42:33 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*p_dst;
	char		*p_src;

	if (!src && !dst)
		return (0);
	p_dst = (char *)dst;
	p_src = (char *)src;
	i = 0;
	while (len > 0)
	{
		if (dst > src)
			p_dst[len - 1] = p_src[len - 1];
		else
			p_dst[i] = p_src[i];
		len--;
		i++;
	}
	return (dst);
}
