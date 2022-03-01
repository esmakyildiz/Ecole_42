/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakyild <esmanakyldz@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:47:58 by esakyild          #+#    #+#             */
/*   Updated: 2022/02/14 14:11:59 by esakyild         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int deg)
{
	if (deg == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (deg < 0)
	{
		ft_putchar('-');
		deg = -deg;
	}
	if (deg > 9)
	{
		ft_putnbr(deg / 10);
		ft_putnbr(deg % 10);
	}
	else
		ft_putchar(deg + '0' );
}
