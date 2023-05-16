/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:49:46 by jternero          #+#    #+#             */
/*   Updated: 2022/10/06 21:49:05 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}

/*
esta funcion busca en un strim el caracter que le estemos dando como parametro
nos va a devolver la cadena de caracteres 
desde que haya encontrado el caracter del int c hasta el caracter nulo.
ola que ase = s
q = c
resultado de strchr = que ase
int main(void)

int main(void)
{
	printf("esto queda depues de strchr /\n%s", ft_strchr("como esta el queso", 113));
}
/*
