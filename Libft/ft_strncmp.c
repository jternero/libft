/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:02:33 by jternero          #+#    #+#             */
/*   Updated: 2022/10/06 21:48:01 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		++i;
	}
	if (i != n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*
esta funcion compara s1 y s2 en la longitud de n,
el resultado sera 0 cuando sean iguales.
el resultado sera negativo si s1 es menor
el resultado sera positivo si s1 es mayor 


int main(void)
{
	printf("esto devuelve despues de strcmp cuando las cadenas son iguales ||%d||\n", ft_strncmp("como esta el queso", "como esta el queso", 20));
	printf("esto devuelve despues de strcmp cuando s1 es la MAYOR de las dos ||%d||\n", ft_strncmp("como esta el queso", "como  el queso", 20));
	printf("esto devuelve despues de strcmp cuando s1 es la MENOR de las dos ||%d||\n", ft_strncmp("como  el queso", "como esta el queso", 20));
}
*/