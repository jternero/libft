/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:52:29 by jternero          #+#    #+#             */
/*   Updated: 2022/10/07 13:53:16 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)

{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}
//esta funcion creada cuenta las palabras 
// que se encuentran entre los espacios.

static int	ft_size_word(char const *s, char c, int i)

{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}
//esta funcion creada mide las palabras

static void	ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
}
//esta funcion creada libera la memoria 

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	char	**strs;
	int		size;
	int		j;

	i = 0;
	j = -1;
	word = ft_count_word(s, c);
	strs = (char **)malloc((word + 1) * sizeof(char *));
	if (!(strs))
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		strs[j] = ft_substr(s, i, size);
		if (!strs[j])
			return (ft_free(strs, j), NULL);
		i += size;
	}
	strs[j] = 0;
	return (strs);
}

//declaramos los contadores, la reserva de memoria y
//con la funcion count words sabemos cuantas palabras seran en total
//asi poder crear la memoria correctamente
//si la reserva de memoria 