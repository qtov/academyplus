/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforgaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 14:47:25 by pforgaci          #+#    #+#             */
/*   Updated: 2016/01/29 17:27:18 by pforgaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			j;
	size_t			k;
	unsigned char	found;

	i = 0;
	if (!s2)
		return ((char *)s1);
	while (i < n && s1[i])
		if (s1[i++] == s2[0])
		{
			j = i - 1;
			k = 0;
			found = 1;
			while (s2[k] && s1[j])
				if (s1[j++] != s2[k++] || i > n)
				{
					found = 0;
					break ;
				}
			if (found == 1 && i - 1 + j <= n)
				return ((char *)(s1 + i - 1));
		}
	return (NULL);
}
