#include "libft.h"

char	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && n >= i)
		i++;
	return (s1[i] - s2[i]);
}
