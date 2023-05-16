/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:50:41 by jternero          #+#    #+#             */
/*   Updated: 2022/10/07 12:47:16 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s++))
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*res;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		res = malloc(1);
		if (!res)
			return (0);
		res[0] = '\0';
		return (res);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	while (start < ft_strlen(s) && i < len && s[start])
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}

/*
Esta funcion nos devuelve una sub cadena de la 
cadena que le demos como principal.
le indicaremos la posicion del string donde debemos empezar
a hacer la subcadena. Crearemos una reserva de memoria de
len +1, contando el caracter nulo.


int main(void)
{
	char	*str = "Welcome to the dark side";
	
	printf("The original string is |%s\n", str);
	
	printf("The Substring generated is |%s", ft_substr(str, 11, 4));
}
*/