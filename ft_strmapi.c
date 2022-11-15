/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melhajja <melhajja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 08:55:59 by melhajja          #+#    #+#             */
/*   Updated: 2022/11/09 18:27:58 by melhajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*store;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	store = malloc(ft_strlen(s) + 1);
	if (store == NULL)
		return (NULL);
	while (s[i])
	{
		store[i] = f(i, s[i]);
		i++;
	}
	store[i] = '\0';
	return (store);
}
