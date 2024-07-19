/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:56:45 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/09 14:43:01 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;
	size_t	i;

	i = 0;
	if (size * nmemb == 0)
	{
		array = malloc(0);
		return (array);
	}
	if (size > SIZE_MAX / nmemb)
		return (NULL);
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	while (i < nmemb * size)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}

/* int	main(void)
{
	char *dest;
	dest = ft_calloc(5, 4);
	free(dest);
	return (0);
} */
