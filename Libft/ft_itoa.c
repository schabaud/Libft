/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schabaud </var/mail/schabaud>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 02:44:11 by schabaud          #+#    #+#             */
/*   Updated: 2016/02/26 02:44:49 by schabaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getsize(long n, size_t sign)
{
	size_t	size;

	size = sign + ((n == 0) ? 1 : 0);
	n = (n < 0) ? n * -1 : n;
	while (n)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char			*ft_itoa(int n)
{
	char	*result;
	long	nbr;
	size_t	i;
	size_t	sign;

	nbr = (long)n;
	sign = (n < 0) ? 1 : 0;
	nbr = (sign == 1) ? -1 * nbr : nbr;
	i = ft_getsize(nbr, sign);
	if ((result = malloc(i + 1)) == NULL)
		return (NULL);
	result[i] = '\0';
	while (i-- != sign)
	{
		result[i] = nbr % 10 + '0';
		nbr = nbr / 10;

	}
	result[0] = (sign == 1) ? '-' : result[0];
	return (result);
}
