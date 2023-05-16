/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:46:48 by jternero          #+#    #+#             */
/*   Updated: 2022/10/06 22:04:59 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = (size_t)0;
	if (n == (size_t)0)
		return (0);
	while (i < n && (((unsigned char *)str1)[i] == ((unsigned char *)str2)[i]))
		i++;
	if (i == n)
		return (0);
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}

/*
esta funcion compara dos memorias en los bytes que indica n
si el valor que devuelve la funcion es 0 es que las cadenas son iguales.
si el valor de devuelve es negativo indica que str1 es la menor
si el valor que devuelve es positivo indica que str1 es la mayor.

int main(void)
{
	printf("esto queda depues de memcmp cuando son IGUALES %d\n", ft_memcmp("como esta el queso","como esta el queso", 20));
	printf("esto queda depues de memcmp cuando str1 es la MAYOR %d\n", ft_memcmp("como esta el queso","como esta queso", 20));
	printf("esto queda depues de memcmp cuando str1 es la MENOR  %d\n", ft_memcmp("como esta queso","como esta el queso", 20));

}
*/