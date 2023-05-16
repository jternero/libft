/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:30:34 by jternero          #+#    #+#             */
/*   Updated: 2022/10/06 20:59:49 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//la primera parte de la funcion copia 
//la memoria de src a dst si la distancia 
//de src + 1(caracter nulo) es menor que 
//la distancia de dst.
size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < dstsize)
	{
		ft_memcpy(dst, src, srclen + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize -1] = '\0';
	}
	return (srclen);
}

/*
da por valor devuelto la longitud de src 
*/