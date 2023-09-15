/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 01:48:31 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/09 10:48:16 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		temp = ft_lstnew(content);
		if (!temp)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, temp);
		lst = lst->next;
	}
	return (new_lst);
}

//t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_lst;
// 	t_list	*first_new;
// 	void	*content;

// 	if (!lst || !f || !del)
// 		return (NULL);
// 	lst->content = f(lst->content);
// 	new_lst = ft_lstnew(f(lst->content));
// 	if (!new_lst)
// 	{
// 		ft_lstdelone(lst, del);
// 		return (0);
// 	}
// 	lst = lst->next;
// 	first_new = new_lst;
// 	while (lst)
// 	{
// 		lst->content = f(lst->content);
// 		new_lst->next = ft_lstnew(lst->content);
// 		if (!new_lst)
// 		{
// 			ft_lstdelone(lst, del);
// 			ft_lstclear(&first_new, del);
// 			return (NULL);
// 		}
// 		new_lst = new_lst->next;
// 		lst = lst->next;
// 	}
// 	new_lst->next = NULL;
// 	return (first_new);
// }
