/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:59:38 by jternero          #+#    #+#             */
/*   Updated: 2022/10/06 19:23:38 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
esta funcion nos comprueba si el int c 
es un caracter que se encuentra en la tabla ascii, 
nos devuelve 1 o 0 segun sea cierto o falso. 
*/