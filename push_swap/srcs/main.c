/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:22:41 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/19 16:21:46 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;

	stack_a = NULL;
	if (ac < 2)
		return (0);
	stack_a = create_lst(ac, av);
	if (ft_lstsize(stack_a) == 1)
		ft_error1(stack_a);
	ft_algo(stack_a);
	printf("---------stack_a---------\n");
	print_list(stack_a);
	ft_free(stack_a);
	return (0);
}
