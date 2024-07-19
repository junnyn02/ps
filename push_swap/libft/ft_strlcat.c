/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:02:33 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/09 14:43:01 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;
	size_t	len_src;

	j = 0;
	i = 0;
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (siz <= len_dest)
		return (ft_strlen(src) + siz);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < siz -1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_src + len_dest);
}

/* int	main(int ac, char **av)
{
	size_t	res;

	res = 0;
	if (ac != 4)
		return (0);
	res = ft_strlcat(av[1], av[2], ft_atoi(av[3]));
	printf("%zu\n", res);
	printf("%s", av[1]);
	return (0);
} */
