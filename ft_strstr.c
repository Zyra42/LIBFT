#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
		i++;
		j = 0;
	}
	return [NULL];
}
