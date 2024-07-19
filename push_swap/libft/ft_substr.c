/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:27:05 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/09 14:43:01 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*array;
	size_t	i;

	i = 0;
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		len = 0;
	array = malloc(sizeof(char) * (len + 1));
	if (!array)
		return (NULL);
	while (i < len && s[start])
		array[i++] = s[start++];
	array[i] = '\0';
	return (array);
}

/* int	main(int ac, char **av)
{
	char	*array;

	if (ac != 4)
		return (0);
	array = ft_substr(av[1], ft_atoi(av[2]), ft_atoi(av[3]));
	printf("%s", array);
	free(array);
	return (0);
} */
