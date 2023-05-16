/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:15:30 by jternero          #+#    #+#             */
/*   Updated: 2022/10/06 22:54:55 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = malloc(count * size);
	if (memory == NULL)
		return (0);
	while (i < count * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}

/*
esta funcion guarda la memoria que necesitaremos posteriormente
y la inicializa con 0.
devuelve la direccion apuntando a la memoria si la asignacion es exitosa,
o null si falla.


#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i,n;
    int * pData;
         printf ("El número de dígitos que se introducirán:");
    scanf ("%d",&i);
    pData = (int*) ft_calloc (i,sizeof(int));
    if (pData==NULL) exit (1);
    for (n=0;n<i;n++)
    {
                 printf ("Ingrese un número #% d:", n + 1);
        scanf ("%d",&pData[n]);
    }
         printf ("El número que ingresaste es:");
    for (n=0;n<i;n++) printf ("%d ",pData[n]);
   
    free (pData);
    system("pause");
    return 0;
}
*/