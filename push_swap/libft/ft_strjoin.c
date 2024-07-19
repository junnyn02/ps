/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:40:16 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/09 14:43:01 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*array;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	while (*s1)
		array[i++] = *s1++;
	while (*s2)
		array[i++] = *s2++;
	array[i] = '\0';
	return (array);
}

/* int	main(int ac, char **av)
{
	char	*str;

	if (ac != 3)
		return (0);
	str = ft_strjoin(av[1], av[2]);
	printf("%s", str);
	free(str);
	return (0);
} */
