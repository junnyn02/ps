/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:12:28 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/09 14:43:01 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_len_nbr(int n)
{
	int			len;
	long int	tmp;

	tmp = n;
	len = 0;
	if (tmp < 0)
	{
		len++;
		tmp = -tmp;
	}
	while (tmp > 9)
	{
		tmp /= 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	int			i;
	char		*array;
	long int	tmp;

	i = 0;
	len = ft_len_nbr(n);
	array = malloc(sizeof(char) * (len + 1));
	if (!array)
		return (NULL);
	tmp = n;
	if (n < 0)
	{
		array[0] = '-';
		tmp = -tmp;
	}
	while (tmp > 9)
	{
		array[len - i - 1] = tmp % 10 + '0';
		tmp = tmp / 10;
		i++;
	}
	array[len - i - 1] = tmp + '0';
	array[len] = '\0';
	return (array);
}

/* int	main(void)
{
	char	*array;

	array = ft_itoa(-2147483648);
	printf("%s", array);
	free(array);
	return (0);
} */
