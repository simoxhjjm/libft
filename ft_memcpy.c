/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melhajja <melhajja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:20:36 by melhajja          #+#    #+#             */
/*   Updated: 2022/11/10 13:24:14 by melhajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	size_t			i;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	if (dst == src)
		return (dst);
	if (csrc == NULL && cdst == NULL)
		return (NULL);
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (cdst);
}
