/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:08:37 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/09 14:43:01 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_check(unsigned char s1, char const *set)
{
	while (*set)
	{
		if (s1 == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*array;
	int		start;
	int		end;
	int		len;
	int		i;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_check(s1[start], set) == 1)
		start++;
	while (end > start && ft_check(s1[end], set) == 1)
		end--;
	len = end - start + 1;
	array = malloc(sizeof(char) * (len + 1));
	if (!array)
		return (NULL);
	while (start <= end)
		array[i++] = s1[start++];
	array[i] = '\0';
	return (array);
}

/* int	main(int ac, char **av)
{
	char	*str;

	if (ac != 3)
		return (0);
	str = ft_strtrim(av[1], av[2]);
	printf("%s", str);
	free(str);
	return (0);
} */
