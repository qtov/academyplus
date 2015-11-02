#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new;
	size_t	i;

	new = (unsigned char *)malloc(size + 1);
	if (!new)
		return NULL;
	else
	{
		while (i < size)
			*((unsigned char *)new + i++) = 0;
		return (new);
	}
}
