/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:36:11 by junguyen          #+#    #+#             */
/*   Updated: 2024/07/09 14:43:01 by junguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (count);
}

int	ft_len_word(char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

char	*ft_array(char *s, int n)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	while (i < n)
		str[i++] = *s++;
	str[i] = '\0';
	return (str);
}

char	**ft_malloc_array(char **array, char *s, char c)
{
	int	i;
	int	word_len;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			word_len = ft_len_word(s, c);
			array[i] = ft_array(s, word_len);
			if (!array[i])
			{
				while (i > 0)
					free(array[--i]);
				free(array);
				return (NULL);
			}
			s += word_len;
			i++;
		}
		else
			s++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		nb_words;

	nb_words = ft_count_words(s, c);
	array = malloc(sizeof(char *) * (nb_words + 1));
	if (!array)
		return (NULL);
	array[nb_words] = 0;
	array = ft_malloc_array(array, (char *)s, c);
	return (array);
}

/* int	main(int ac, char **av)
{
	char	**array;
	int		i;
	int		word;

	i = 0;
	word = 1;
	if (ac != 3)
		return (0);
	array = ft_split(av[1], *av[2]);
	while (array[i] != 0)
	{
		printf("mot %d : %s\n", word, array[i]);
		word++;
		i++;
	}
	while (i >= 0)
	{
		free(array[i]);
		i--;
	}
	free(array);
	return (0);
} */
