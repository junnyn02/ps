/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:36:50 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/19 17:55:22 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_sort(t_list *lst)
{
	t_list	*tmp;

	while (lst != NULL)
	{
		tmp = lst;
		while (lst->next != NULL)
		{
			if (lst->content > lst->next->content)
				return (-1);
			lst = lst->next;
		}
		lst = tmp;
		lst = lst->next;
	}
	return (0);
}

void	ft_sort_len3(t_list *lst)
{
	if (lst->content > lst->next->content)
	{
		if (lst->content > lst->next->next->content)
		{
			if (lst->next->content > lst->next->next->content)
			{
				swap_lst(lst, 0);
				reverse_rotate_lst(lst, 0);
			}
			else
				rotate_lst(lst, 0);
		}
		else
			swap_lst(lst, 0);
	}
	else
	{
		if (lst->content > lst->next->next->content)
			reverse_rotate_lst(lst, 0);
		else
		{
			swap_lst(lst, 0);
			rotate_lst(lst, 0);
		}
	}
}

void	ft_push_to_b(t_list *stack_a, t_list *stack_b)
{
	
}

void	ft_sort(t_list *stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	while (ft_lstsize(stack_a) > 3 && ft_lstsize(stack_b) <= 2)
	{
		stack_b = push_lst(stack_a, stack_b, 'b');
		stack_a = ft_free_node(stack_a);
	}
	if (ft_lstsize(stack_a) == 3)
		ft_push_back(stack_a, stack_b);
	else
		ft_push_to_b(stack_a, stack_b);
	ft_free(stack_b);
}

void	ft_algo(t_list *stack_a)
{
	if (ft_check_sort(stack_a) == 0)
		return ;
	if (ft_lstsize(stack_a) == 2)
		swap_lst(stack_a, 0);
	else if (ft_lstsize(stack_a) == 3)
		ft_sort_len3(stack_a);
	else
		ft_sort(stack_a);
}
