/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:02:09 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/19 13:29:51 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_lst(int nb, t_list *list)
{
	while (list != NULL)
	{
		if (nb == list->content)
			return (-1);
		list = list->next;
	}
	return (0);
}

int	check_param(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (i == 0 && (str[i] == '-' || str[i] == '+'))
			i++;
		else if (ft_isdigit(str[i]) == 0)
			return (-1);
		else
			i++;
	}
	return (0);
}

t_list	*add_nodes(char **av, t_list *lst, int i)
{
	t_list	*new_node;
	long	nbr;

	new_node = NULL;
	while (av[++i])
	{
		if (check_param(av[i]) == -1)
			ft_error2(av, lst);
		nbr = ft_atoi(av[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			ft_error2(av, lst);
		if (check_lst(nbr, lst) == -1)
			ft_error2(av, lst);
		new_node = ft_lstnew(nbr);
		if (!new_node)
			ft_error2(av, lst);
		ft_lstadd_back(&lst, new_node);
	}
	return (lst);
}

t_list	*expand_lst(char **av, t_list *new_lst, int ac, int i)
{
	int		j;
	char	**str;

	while (++i < ac)
	{
		j = -1;
		str = ft_split(av[i], ' ');
		new_lst = add_nodes(str, new_lst, j);
		ft_free_str(str);
	}
	return (new_lst);
}

t_list	*create_lst(int ac, char **av)
{
	int		i;
	int		j;
	long	nbr;
	t_list	*new_lst;
	char	**str;

	i = 1;
	j = 0;
	new_lst = NULL;
	str = ft_split(av[i], ' ');
	if (check_param(str[j]) == -1)
		ft_error2(str, new_lst);
	nbr = ft_atoi(str[j]);
	if (nbr > INT_MAX || nbr < INT_MIN)
		ft_error2(str, new_lst);
	new_lst = ft_lstnew(nbr);
	if (!new_lst)
	{
		ft_free_str(str);
		exit(EXIT_FAILURE);
	}
	new_lst = add_nodes(str, new_lst, j);
	ft_free_str(str);
	new_lst = expand_lst(av, new_lst, ac, i);
	return (new_lst);
}
