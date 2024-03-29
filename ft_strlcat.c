/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforgaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 14:47:14 by pforgaci          #+#    #+#             */
/*   Updated: 2016/01/29 16:40:12 by pforgaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		++i;
	while (src[j] && i < size)
	{
		dst[i] = src[j];
		++i;
		++j;
	}
	dst[i] = '\0';
	if (!src[j])
		return (i);
	else
		return (ft_strlen(src) + size);
}
