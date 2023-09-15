/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:38:07 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/15 22:34:09 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	size_t	i;

	i = ft_lstsize(lst);
	while (i > 1)
	{
		i--;
		lst = lst->next;
	}
	return (lst);
}

// int main(void)
// {
// 	t_list *l;
//     t_list *expected;
//     t_list *actual;

//     l = ft_lstnew(ft_strdup("1"));
//     l->next = ft_lstnew(ft_strdup("2"));
//     l->next->next = ft_lstnew(ft_strdup("3"));
// 	actual = ft_lstlast(l);
// 	expected = l->next->next;
// 	if (actual == expected)
//         printf("SUCCESS\n");
// 	else
// 		printf("TEST_FAILED\n");
// 	return (0);
// }
