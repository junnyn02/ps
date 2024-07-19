/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:20:59 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/09 14:43:01 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (len - i > 0 && big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && len - i - j > 0 && big[i + j])
				j++;
			if (little[j] == '\0')
				return ((char *)big + i);
			if (len - i - j <= 0)
				return (NULL);
		}
		i++;
	}
	return (NULL);
}

/* int	main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	printf("%s", ft_strnstr(av[1], av[2], ft_atoi(av[3])));
	return (0);
} */