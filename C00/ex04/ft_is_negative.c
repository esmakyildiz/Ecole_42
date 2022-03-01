/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakyild <esmanakyldz@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:41:46 by esakyild          #+#    #+#             */
/*   Updated: 2022/02/13 18:37:46 by esakyild         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	poz;

		neg = 'N';
		poz = 'P';
	if (n >= 0)
	{
		write (1, &poz, 1);
	}
	else
	{
		write(1, &neg, 1);
	}
}
