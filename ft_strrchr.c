#include "libft.h"

char	*ft_strrchr(const char *s, int c,)
{
	int	l;

	l = ft_strlen(s);
	while (len >= 0)
	{
		if (s[l] == (char)c)
			return (&s[l]);
		i--;
	}
	return(NULL);
}
