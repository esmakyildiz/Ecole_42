/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakyild <esmanakyldz@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:11:52 by esakyild          #+#    #+#             */
/*   Updated: 2022/02/27 17:54:46 by esakyild         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc < 1)
		return (0);
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i ++;
	}
	write(1, "\n", 1);
	return (1);
}
