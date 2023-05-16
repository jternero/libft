/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:17:32 by jternero          #+#    #+#             */
/*   Updated: 2022/10/07 14:14:10 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_nbr(int n, int fd)
{
	if (n >= 10)
		ft_print_nbr(n / 10, fd);
	write(fd, &"0123456789"[n % 10], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	ft_print_nbr(n, fd);
}

/* imprime por pantalla un numero dado como parametro,
para eso creo una funcion que imprima los numeros que son mayores de 9,
*/