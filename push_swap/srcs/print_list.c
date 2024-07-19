/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:07:46 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/15 13:07:58 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
	{
		printf("liste_vide\n");
		return ;
	}
	tmp = lst;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
}