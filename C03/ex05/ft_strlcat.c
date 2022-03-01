/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakyild <esmanakyldz@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:06:06 by esakyild          #+#    #+#             */
/*   Updated: 2022/02/20 17:37:36 by esakyild         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destuzunluk;
	unsigned int	srcuzunluk;

	i = ft_strlen(dest);
	j = 0;
	destuzunluk = ft_strlen(dest);
	srcuzunluk = ft_strlen(src);
	if (size < 1)
		return (srcuzunluk + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < destuzunluk)
		return (srcuzunluk + size);
	else
		return (destuzunluk + srcuzunluk);
}
