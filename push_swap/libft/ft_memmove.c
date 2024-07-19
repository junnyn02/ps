/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:49:42 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/09 14:43:01 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	i = (int)n - 1;
	d = (char *)dest;
	s = (char *)src;
	if (d > s)
	{
		while (i > 0)
		{
			d[i] = s[i];
			i--;
		}
		if (i == 0)
			d[i] = s[i];
	}
	else if (d < s)
	{
		i = 0;
		while (i++ < (int)n)
			*d++ = *s++;
	}
	return (dest);
}

/* int	main(int ac, char **av)
{
	char	*array;

	if (ac != 4)
		return (0);
	array = ft_memmove(av[2], av[1], ft_atoi(av[3]));
	printf("%s", array);
	return (0);
} */
