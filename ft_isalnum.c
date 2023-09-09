/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:04:26 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/09 23:18:46 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	char a = 'a';
// 	printf("real = %d\n",isalnum(a));
// 	printf("ft = %d\n",ft_isalnum(a));
// 	return 0;
// }
