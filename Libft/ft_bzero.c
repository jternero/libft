/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:06:43 by jternero          #+#    #+#             */
/*   Updated: 2022/10/06 19:53:10 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*r;
	size_t			i;

	i = 0;
	r = (unsigned char *)s;
	while (i < n)
	{
		r[i] = 0;
		i++;
	}
	s = r;
}

/*
Esta funcion pone a 0 los primeros n bytes del area 
de bytes que comienza en s

no devuelve ningun valor.
*/