/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:22:04 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/09 14:43:01 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	*dst;

	src = (unsigned char *)s1;
	dst = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((src[i]) == (dst[i]))
			i++;
		else
			return (src[i] - dst[i]);
	}
	return (0);
}

/* int	main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	printf("%d", ft_memcmp(av[1], av[2], ft_atoi(av[3])));
	return (0);
} */
