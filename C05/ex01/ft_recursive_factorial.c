/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakyild <esmanakyldz@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:46:42 by esakyild          #+#    #+#             */
/*   Updated: 2022/02/26 15:48:18 by esakyild         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int n)
{
	if (n < 0)
		return (0);
	else if (n <= 1)
		return (1);
	else
		return (n * ft_recursive_factorial(n - 1));
}
