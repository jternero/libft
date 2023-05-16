/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:33:56 by jternero          #+#    #+#             */
/*   Updated: 2022/10/06 21:07:06 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*
Esta funcion nos va a cambiar una letra minuscula
a una letra en mayuscula.
le daremos un entero, y nos devuelve un entero
que sera un caracter en la tabla ascii.
*/