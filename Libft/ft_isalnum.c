/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:50:57 by jternero          #+#    #+#             */
/*   Updated: 2022/10/06 19:22:07 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
esta funcion cumple la tarea de comprobar si el int c 
es un caracter alfanumerico, es decir si es un numero o una letra, mayuscilas o minusculas.
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57)
		|| (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	return (0);
}
