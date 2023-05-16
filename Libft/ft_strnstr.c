/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:21:39 by jternero          #+#    #+#             */
/*   Updated: 2022/10/06 22:36:20 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		lenght;
	char	*large;
	char	*small;

	large = (char *)big;
	small = (char *)little;
	i = 0;
	lenght = 0;
	if (*little == '\0')
		return ((char *)big);
	while (*large != '\0' && *small != '\0' && i++ <= len)
	{
		if (*large == *small)
		{
			while ((*(large + lenght) == *(small + lenght)) && i++ <= len)
			{
				if (*(small + lenght + 1) == '\0')
					return ((char *)large);
				lenght++;
			}
		}
		large++;
	}
	return (NULL);
}

/*
esta funcion nos devolvera la cadena (big) 
si la cadena little es menor que big 
y ademas si las cadenas son iguales.
si encuentra un caracter que no coincida nos devolvera null
si la cadena big es la menor nos devolvera null
si la cadena little es un caracter nulo nos devolvera big
*/
int main(void)
{
	printf("esto queda depues de strnstr cuando littleone es mayor que bigone|| %s\n", ft_strnstr("Clase.A.alumno.F.JOSE.", "hgi", 30));
	printf("esto queda depues de strnstr cuando bigone es mayor que littleone|| %s\n", strnstr("Clase.A.alumno.F.JOSE", "Clase.A.alumno.F.", 30));

}