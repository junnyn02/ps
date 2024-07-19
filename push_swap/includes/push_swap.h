/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:26:09 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/19 16:04:02 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "printf.h"
# include <stdlib.h>
# include <limits.h>

t_list	*create_lst(int ac, char **av);
t_list	*push_lst(t_list *stack_src, t_list *stack_dest, char c);
t_list	*ft_free_node(t_list *lst);

void	ft_free(t_list *lst);
void	swap_lst(t_list *lst, int i);
void	rotate_lst(t_list *lst, int i);
void	reverse_rotate_lst(t_list *lst, int i);
void	ft_error2(char **str, t_list *lst);
void	ft_error1(t_list *lst);
void	ft_free_str(char **str);
void	ft_algo(t_list *stack_a);

int		main(int ac, char **av);

void	print_list(t_list *lst); //a supp

#endif