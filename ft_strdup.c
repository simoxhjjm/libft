/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melhajja <melhajja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:41:36 by melhajja          #+#    #+#             */
/*   Updated: 2022/11/10 10:49:51 by melhajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	char	*save_dest;

	dest = malloc(ft_strlen(s1) + 1);
	if (dest == NULL)
		return (NULL);
	save_dest = dest;
	while (*s1)
		*dest++ = *s1++;
	*dest = '\0';
	return (save_dest);
}
