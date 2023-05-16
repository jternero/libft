/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:16:01 by jternero          #+#    #+#             */
/*   Updated: 2022/10/06 21:32:06 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}

/*
esta funcipon busca un caracter en concreto (int c)
en la cadena de caracteres str,
pero empieza desde el final de la cadena
para eso primero recorremos str 
y sabiendo la longitud de str
podemos decirle que empiece por esa posicion 
y vaya hacia atras en la cadena,
cuando encuentra el caracter que le hemos dicho como parametro
nos dara como valor devuelto lo que quede de la cadena hasta el cracter nulo.
c = q
str = como esta el queso
resultado de strrchr = queso 

int main(void)
{
	printf("esto queda depues de strrchr /\n%s", ft_strrchr("como esta el queso", 113));
}
*/