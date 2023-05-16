/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:00:41 by jternero          #+#    #+#             */
/*   Updated: 2022/10/06 21:58:47 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ppp;

	ppp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ppp[i] == (unsigned char)c)
		{
			return ((char *)&ppp[i]);
		}
		i++;
	}
	return (NULL);
}

/*
esta funcion devuelve un string a un puntero
busca en una cadena(s) el caracter que le hemos dado como aparametro(c)
en una longitud que le hemos dado(n)
si lo encuentra nos devolvera lo que quede del s hasta el caracter nulo.
si no encuentra en los bytes de n el caracter c, devuelve un NULL.

int main(void)
{
	printf("esto queda depues de memchr /\n%s", ft_memchr("como esta el queso", 113, 20));
}
*/