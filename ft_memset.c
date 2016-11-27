#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && i < n)
	{
		s[i] = c;
		i++;
	}
}
