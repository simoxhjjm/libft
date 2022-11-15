/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melhajja <melhajja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:27:01 by melhajja          #+#    #+#             */
/*   Updated: 2022/11/10 13:26:05 by melhajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = 0;
	if (!*s1 || !*set)
		return (ft_strdup(s1));
	j = ft_strlen(s1);
	dest = NULL;
	if (s1[i] != '\0')
	{
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		if (s1[i] == 0)
			return (ft_strdup(""));
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]))
			j--;
		dest = ft_calloc((j - i + 1), sizeof(char));
		if (dest == NULL)
			return (NULL);
		ft_strlcpy(dest, s1 + i, j - i + 1);
	}
	return (dest);
}
