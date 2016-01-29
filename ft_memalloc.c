/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforgaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 14:46:47 by pforgaci          #+#    #+#             */
/*   Updated: 2016/01/29 16:38:49 by pforgaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new;
	size_t	i;

	i = 0;
	new = (unsigned char *)malloc(size + 1);
	if (!new)
		return (NULL);
	else
	{
		while (i < size)
			*((unsigned char *)new + i++) = 0;
		return (new);
	}
}
