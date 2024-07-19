/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:33:19 by iunguyen          #+#    #+#             */
/*   Updated: 2024/07/16 12:36:35 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return ;
	while (lst != NULL)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}

void	ft_free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i-- > 0)
		free(str[i]);
	free(str);
}

void	ft_error1(t_list *lst)
{
	ft_free(lst);
	ft_putstr_fd("ERRORparam\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}

void	ft_error2(char **str, t_list *lst)
{
	ft_free_str(str);
	ft_free(lst);
	ft_putstr_fd("ERRORparam\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}
