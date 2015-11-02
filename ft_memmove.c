#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = (unsigned char *)ft_memalloc(sizeof(unsigned char) *\
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
