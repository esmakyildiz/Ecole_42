/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakyild <esmanakyldz@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:37:22 by esakyild          #+#    #+#             */
/*   Updated: 2022/02/19 15:37:27 by esakyild         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(int num)
{
	char	*hexx;

	hexx = "0123456789abcdef";
	write(1, &hexx[num / 16], 1);
	write(1, &hexx[num % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 32)
		{
			write(1, "\\", 1);
			hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
