/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:52:14 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/07 20:59:01 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	ans;

	if (n < 0 && n > -10)
		ft_putchar_fd('-', fd);
	if (n >= 10 || n <= -10)
	{
		ft_putnbr_fd(n / 10, fd);
		n %= 10;
	}
	if (n >= 0)
		ans = '0' + n;
	else
		ans = '0' - n;
	ft_putchar_fd(ans, fd);
}
