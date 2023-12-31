/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:53:00 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/16 18:23:14 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	i = n;
	if (i > 9)
	{
		ft_putnbr_fd((i / 10), fd);
		ft_putchar((i % 10 + '0'), fd);
	}
	else
	{
		i = i + '0';
		write(fd, &i, 1);
	}
}
