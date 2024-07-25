/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:20:34 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/19 15:54:16 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_free_node(t_list *lst)
{
	t_list	*tmp;

	tmp = lst->next;
	free(lst);
	return (tmp);
}

void	reverse_rotate_lst(t_list *lst, int i)
{
	t_list	*tmp;
	int		a;
	int		b;

	tmp = lst;
	a = lst->next->content;
	lst->next->content = lst->content;
	lst = lst->next;
	while (lst->next != NULL)
	{
		b = lst->next->content;
		lst->next->content = a;
		a = b;
		lst = lst->next;
	}
	lst = tmp;
	lst->content = a;
	if (i == 0)
		printf("rra\n");
	else if (i == 1)
		printf("rrb\n");
	else if (i == 2)
		printf("rrr\n");
}

void	rotate_lst(t_list *lst, int i)
{
	int	tmp;

	tmp = lst->content;
	while (lst->next != NULL)
	{
		lst->content = lst->next->content;
		lst = lst->next;
	}
	lst->content = tmp;
	if (i == 0)
		printf("ra\n");
	else if (i == 1)
		printf("rb\n");
	else if (i == 2)
		printf("rr\n");
}

void	swap_lst(t_list *lst, int i)
{
	int	tmp;

	tmp = lst->content;
	lst->content = lst->next->content;
	lst->next->content = tmp;
	if (i == 0)
		printf("sa\n");
	else if (i == 1)
		printf("sb\n");
	else if (i == 2)
		printf("ss\n");
}

t_list	*push_lst(t_list *stack_src, t_list *stack_dest, char c)
{
	t_list	*new_node;

	if (!stack_src)
		return (NULL);
	new_node = ft_lstnew(stack_src->content, ft_lst(stack_dest));
	if (!new_node)
		exit(EXIT_FAILURE);
	printf("p%c\n", c);
	if (stack_dest == NULL)
		return (new_node);
	ft_lstadd_front(&stack_dest, new_node);
	return (stack_dest);
}
