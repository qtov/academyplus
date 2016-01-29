/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforgaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 14:47:28 by pforgaci          #+#    #+#             */
/*   Updated: 2016/01/29 16:48:02 by pforgaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t			i;
	size_t			j;
	size_t			k;
	unsigned char	found;

	i = 0;
	while (s1[i++])
		if (s1[i] == s2[0])
		{
			j = i;
			k = 0;
			found = 1;
			while (s2[k++] && s1[j++])
				if (s1[j] != s2[k])
				{
					found = 0;
					break ;
				}
			if (found == 1)
				return ((char *)(s1 + i));
		}
	return (NULL);
}
