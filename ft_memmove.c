#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;
	size_t			i;

	/* ft_memalloc */
	tmp = (unsigned char *)malloc(sizeof(unsigned char) *\
			(ft_strlen(src) + 1));
	i = 0;
	while (*((unsigned char *)src + i) && i < len)
	{
		tmp[i] = *((unsigned char *)src + i);
		++i;
	}
	i = 0;
	while (tmp[i] && i < len)
	{
		*((unsigned char *)dst + i) = tmp[i];
		++i;
	}
	return (dst);
}
