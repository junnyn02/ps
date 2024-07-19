/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 18:31:43 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/10 13:00:37 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap2(t_list *lst, t_list *new_lst,
					void *(*f)(void *), void (*del)(void *))
{
	t_list	*element;
	int		content;

	while (lst != NULL)
	{
		content = f(lst->content);
		element = ft_lstnew(content);
		if (!element)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, element);
		lst = lst->next;
	}
	return (new_lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	int		content;

	if (!lst || !f || !del)
		return (NULL);
	content = f(lst->content);
	new_lst = ft_lstnew(content);
	if (!new_lst)
	{
		del(content);
		return (NULL);
	}
	lst = lst->next;
	new_lst = ft_lstmap2(lst, new_lst, f, del);
	return (new_lst);
}
