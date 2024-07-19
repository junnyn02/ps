/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:22:53 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/09 14:43:01 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t siz)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (siz == 0)
		return (len);
	while (src[i] && i < siz - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/* int	main(int ac, char **av)
{
	size_t	res;

	res = 0;
	if (ac != 4)
		return (0);
	res = ft_strlcpy(av[1], av[2], ft_atoi(av[3]));
	printf("%zu\n", res);
	printf("%s", av[1]);
	return (0);
} */
