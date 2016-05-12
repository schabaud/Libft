/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schabaud </var/mail/schabaud>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 02:57:37 by schabaud          #+#    #+#             */
/*   Updated: 2016/02/26 02:57:53 by schabaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print(long nbr, int fd)
{
	if (nbr)
	{
		ft_print(nbr / 10, fd);
		ft_putchar_fd('0' + nbr % 10, fd);
	}
	else
		ft_putchar_fd('0' + nbr, fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = (long)n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr *= -1;
	}
	ft_print(nbr, fd);
}
