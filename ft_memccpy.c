#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *((unsigned char *)(src + i)) != c)
	{
		*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
		++i;
	}
	if (i < n)
	{
		*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
		return (dst + i + 1);
	}
	else
		return (NULL);
}
