/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melhajja <melhajja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:10:15 by melhajja          #+#    #+#             */
/*   Updated: 2022/11/10 13:24:20 by melhajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const char	*csrc;
	char		*cdst;
	size_t		i;

	csrc = (const char *)src;
	cdst = (char *)dst;
	if (dst == src)
		return (dst);
	if (csrc == NULL && cdst == NULL)
		return (NULL);
	if (src < dst)
	{
		while (n--)
			cdst[n] = csrc[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}
