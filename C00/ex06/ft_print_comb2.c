/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakyild <esmanakyldz@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:27:49 by esakyild          #+#    #+#             */
/*   Updated: 2022/02/13 18:38:26 by esakyild         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	l;
	int	r;

	l = 0;
	while (l <= 98)
	{
		r = l +1;
		while (r <= 99)
		{
			ft_putchar((l / 10) + 48);
			ft_putchar((l % 10) + 48);
			write(1, " ", 1);
			ft_putchar((r / 10) + '0');
			ft_putchar((r % 10) + '0');
			if (l != 98 || r != 99)
			{
				write(1, ", ", 2);
			}
			r++;
		}
		l++;
	}
}
