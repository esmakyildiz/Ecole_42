/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakyild <esmanakyldz@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:28:33 by esakyild          #+#    #+#             */
/*   Updated: 2022/02/15 15:36:02 by esakyild         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	degis;

	i = 0;
	while (i < (size / 2))
	{
		degis = tab[i];
		tab[i] = tab[size - 1 - i];
		tab [size - 1 - i] = degis;
		i++;
	}
}
