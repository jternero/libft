/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:48:08 by jternero          #+#    #+#             */
/*   Updated: 2022/10/07 14:05:39 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nb_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}
//esta funcion cuenta la longitud del numero que queremos 
//pasar a caracter.

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	len = ft_nb_len(n);
	nb = n;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nb)
	{
		str[len] = nb % 10 + '0';
		len--;
		nb = nb / 10;
	}
	return (str);
}

/*
//despues crearemos una reserva de memoria
// con la longitud del entero +1 contando con el caracter nulo
//despues tomamos en cuenta el caracter - si fuera necesario,
//para decirle que el numero es negativo, 
//indicaremos que en la ultima poscicion hay un caractert nulo
// y despues haremos un cambio de caracter a int, haciendo un 
// dividendo y resto. de atras hacia delante.
int main(void)
{
	printf("este numero quiero pasarlo a un char |%s| ", ft_itoa(-8125));
}
*/