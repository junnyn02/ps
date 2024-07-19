/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:24:06 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/09 14:43:01 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)s;
	while (n > 0)
	{
		ptr[i] = c;
		i++;
		n--;
	}
	return (ptr);
}

/* int	main(void)
{
	char	str[50];

	ft_memset(str, 65, 5);
	printf("%s", str);
	return (0);
} */
