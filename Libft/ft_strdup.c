/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schabaud </var/mail/schabaud>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 03:16:19 by schabaud          #+#    #+#             */
/*   Updated: 2016/02/26 03:16:33 by schabaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	if ((s2 = (char *)malloc(sizeof(char) * (1 + ft_strlen(s1)))) == NULL)
		return (NULL);
	i = 0;
	while ((*(s2 + i) = *(s1 + i)) != '\0')
		i++;
	return (s2);
}
