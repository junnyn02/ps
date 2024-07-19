/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:49:09 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/09 14:43:01 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*array;
	int		size;

	size = ft_strlen(s) + 1;
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	ft_strlcpy(array, s, size);
	return (array);
}

/* int	main(int ac, char **av)
{
	char	*str;

	if (ac != 2)
		return (0);
	str = ft_strdup(av[1]);
	printf("%s", str);
	free(str);
	return (0);
} */
