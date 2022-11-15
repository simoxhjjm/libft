/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melhajja <melhajja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:20:52 by melhajja          #+#    #+#             */
/*   Updated: 2022/11/08 20:43:21 by melhajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int		len;
	long	num;

	num = n;
	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		len++;
		num *= -1;
	}
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;
	long	res;

	res = n;
	if (res < 0)
		res *= -1;
	len = ft_count(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (num == NULL)
		return (NULL);
	num[len] = '\0';
	while (--len >= 0)
	{
		if (len == 0 && n < 0)
		{
			num[0] = '-';
		}
		else
		{
			num[len] = res % 10 + 48;
			res = res / 10;
		}
	}
	return (num);
}
