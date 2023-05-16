/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:24:32 by jternero          #+#    #+#             */
/*   Updated: 2022/10/06 23:23:28 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst [i] = src [i];
	return (dst);
}

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	srclen;

	srclen = ft_strlen(src);
	dst = malloc(srclen + 1);
	if (dst == NULL)
		return (NULL);
	ft_strcpy(dst, src);
	return (dst);
}
