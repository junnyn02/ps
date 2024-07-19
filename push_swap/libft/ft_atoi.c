/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:46:58 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/11 12:43:29 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long	ft_atoi(const char *str)
{
	int		i;
	long	num;
	long	signe;

	signe = 1;
	num = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	if (signe == -1)
		num *= signe;
	return (num);
}

/* int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%d", ft_atoi(av[1]));
	return (0);
} */
