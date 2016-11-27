#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int	i;

	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (src[i] != '\0' && i < n)
	{
		dest[i] =src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
