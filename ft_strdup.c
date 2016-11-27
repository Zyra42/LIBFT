#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int	i;

	if (dest = (char*)malloc(sizeof(char)*strlen(s) == NULL))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
